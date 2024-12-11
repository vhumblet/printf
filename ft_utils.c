#include "ft_printf.h"

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putchar(char c, int *count)
{
	int i;

	i = write (1, &c, 1);
	if (i == -1 || i < 0)
		*count = -1;
	else
		*count += 1;
}

void    ft_putstr(char *str, int *count)
{
    if (!str)
        ft_putstr("(null)", count);
    while (str && *str)
        ft_putchar(*str++, count);
}

void    ft_putnbr(int nb, int *count)
{
    long    long_nb;

    long_nb = nb;
    if (long_nb < 0)
    {
        long_nb *= -1;
        ft_putchar('-', count);
    }
    if (long_nb > 9)
        ft_putnbr(long_nb / 10, count);
    ft_putchar((long_nb % 10) + 48, count);
}