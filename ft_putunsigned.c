/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalayan <isalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:27:24 by isalayan          #+#    #+#             */
/*   Updated: 2024/06/19 19:05:35 by isalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putunsigned(unsigned long n)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789";
	if (n > (ft_strlen(base) - 1))
		len += ft_putunsigned(n / ft_strlen(base));
	len += ft_putchar(*(base + (n % ft_strlen(base))));
	return (len);
}
