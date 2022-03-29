#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>
# include <stdlib.h>

int	ft_printchar(int c);
int	ft_printf(const char *str, ...);
int	ft_printnumber(unsigned long int n1, int n2, int n3);
int	ft_printpointer(void *address);
int	ft_printstring(char *str);
int	ft_stugum(int number);

#endif
