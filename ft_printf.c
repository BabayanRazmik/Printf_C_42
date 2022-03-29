/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:44:26 by rbabayan          #+#    #+#             */
/*   Updated: 2022/03/23 17:47:39 by rbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_printf(const char *str, ...)
{
	int	i;
	int	count;

	i = 0;
	count = 0;

	va_list	ptr;
	va_start(ptr, str);
	while (str[i] != 0)
	{
		if (str[i] == '%')
		{
			i++;

			if (str[i] == 'd' || str[i] == 'i')
				count += ft_stugum(va_arg(ptr, int));
			if (str[i] == 's')
				count += ft_printstring(va_arg(ptr,char *));
			if (str[i] == 'x')
				count += ft_printnumber(va_arg(ptr, unsigned int), 16, 0);
			if (str[i] == 'c')
				count += ft_printchar(va_arg(ptr, int));
			if (str[i] == '%')
				count += ft_printchar('%');
			if (str[i] == 'u')
				count += ft_printnumber(va_arg(ptr, unsigned int), 10, 0);
			if (str[i] == 'p')
				count += ft_printpointer(va_arg(ptr,void *));
			if (str[i] == 'X')
				count += ft_printnumber(va_arg(ptr, unsigned int), 16, 1);
		}
		else
			count += ft_printchar(str[i]);
		i++;
	}
	return (count);
}
