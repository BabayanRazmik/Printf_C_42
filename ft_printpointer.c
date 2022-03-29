#include "ft_printf.h"

char d_hex(int e)
{
	if (e >= 0 && e < 10)
		return ('0' + e);
	else
		return ('a' + e - 10); // hex-i tarer
}

int ft_printpointer(void *address)
{
	// int			i;
	uintptr_t	p;
	int			count;
	// char		symbol;

	count = 0;
	p =(uintptr_t)address;
	write (1, "0x", 2);
	count += 2;

	count += ft_printnumber(p, 16, 0);

	// i = (sizeof(address) << 3) - 4;
	// while (i >= 0)
	// {
	// 	symbol = d_hex((p >> i) & 0xf);
	// 	write (1, &symbol, 1);
	// 	count++;
	// 	i -= 4;
	// }
	return (count);
}
