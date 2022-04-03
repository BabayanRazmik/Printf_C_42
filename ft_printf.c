/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbabayan <rbabayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:55:36 by rbabayan          #+#    #+#             */
/*   Updated: 2022/04/01 22:01:47 by rbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cases(char c, va_list ptr, int count)
{
	if (c == 'd' || c == 'i')
		count += ft_stugum(va_arg(ptr, unsigned int));
	if (c == 's')
		count += ft_printstring(va_arg(ptr, char *));
	if (c == 'x')
		count += ft_printnumber(va_arg(ptr, unsigned int), 16, 0);
	if (c == 'c')
		count += ft_printchar(va_arg(ptr, int));
	if (c == '%')
		count += ft_printchar('%');
	if (c == 'u')
		count += ft_printnumber(va_arg(ptr, unsigned int), 10, 0);
	if (c == 'p')
		count += ft_printpointer(va_arg(ptr, void *));
	if (c == 'X')
		count += ft_printnumber(va_arg(ptr, unsigned int), 16, 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	ptr;

	i = 0;
	count = 0;
	va_start(ptr, str);
	while (str[i] != 0)
	{
		if (str[i] == '%')
		{
			i++;
			count = ft_cases(str[i], ptr, count);
		}
		else
			count += ft_printchar(str[i]);
		i++;
	}
	return (count);
}

int main(void)
{
	ft_printf("asdsadada");
	return (0);
}
