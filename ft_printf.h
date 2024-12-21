/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalayan <isalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:51:16 by isalayan          #+#    #+#             */
/*   Updated: 2024/06/20 10:07:46 by isalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *str);
long	ft_abs(long n);
int		ft_putunsigned(unsigned long n);
char	*ft_strchr(const char *s, int c);
int		ft_putaddress(void *format);
int		ft_putchar(char c);
int		ft_puthexa(unsigned long n, char format);
int		ft_putnbr(int n);
int		ft_putstr(char const *s);
#endif