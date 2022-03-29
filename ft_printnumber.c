#include "ft_printf.h"

int ft_printnumber(unsigned long int n1, int n2, int n3) //va_list ptr
{
	char	*hexmec;
	char	*hex;
	int		i;
	int		hashiv;

	//n1 = va_arg(ptr, int);
	hex = "0123456789abcdef";
	hexmec = "0123456789ABCDEF";

	hashiv = 0;
	if (n1 / n2 != 0)
		hashiv += ft_printnumber(n1 / n2 , n2, n3);
	i = n1 % n2;
	if (n2 == 10)
		hashiv += write(1, &hex[i], 1);
	else if (n2 == 16)
	{
		if (n3 == 1)
			hashiv += write(1, &hexmec[i], 1);
		else
			hashiv += write(1, &hex[i], 1);
	}
	return (hashiv);
}
