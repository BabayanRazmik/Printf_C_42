#include "ft_printf.h"

int	ft_printstring(char *str)
{
	int	i;

	if (!str)
		str = "(null)";
	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
