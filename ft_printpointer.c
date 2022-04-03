/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbabayan <rbabayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:55:57 by rbabayan          #+#    #+#             */
/*   Updated: 2022/04/01 19:17:38 by rbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(void *address)
{
	uintptr_t	p;
	int			count;

	count = 0;
	p = (uintptr_t)address;
	write (1, "0x", 2);
	count += 2;
	count += ft_printnumber(p, 16, 0);
	return (count);
}
