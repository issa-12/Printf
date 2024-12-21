/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalayan <isalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:20:40 by isalayan          #+#    #+#             */
/*   Updated: 2024/06/19 19:05:25 by isalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthexa(unsigned long n, char format)
{
	char			*base;
	unsigned int	num;
	int				i;
	unsigned int	base_len;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	i = 0;
	num = (unsigned int)n;
	base_len = ft_strlen(base);
	if (num > (base_len - 1))
		i += ft_puthexa(num / base_len, format);
	i += ft_putchar(*(base + (num % base_len)));
	return (i);
}
