/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stugum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:56:29 by rbabayan          #+#    #+#             */
/*   Updated: 2022/03/24 18:56:31 by rbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_stugum(int number)
{
	int	count;

	count = 0;
	if (number < 0)
	{
		number *= -1;
		count += write(1, "-", 1);
	}
	if (number != -2147483648)
		count += ft_printnumber(number, 10, 0);
	else
		count += write (1, "2147483648", 10);
	return (count);
}
