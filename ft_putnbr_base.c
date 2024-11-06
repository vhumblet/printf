#include "ft_printf.h"

static void     ft_putchar_base(int nb, char *base, int *count)
{
    write (1, &base[nb], 1);
    *count += 1;
}

void    ft_putnbr_base(int nb, int sign, char *base_set, int *count)
{
    unsigned int    size;
    unsigned int    unsigned_nbr;

    unsigned_nbr = nb;
    size = ft_strlen(base_set);
    if (sign && nb < 0)
    {
        unsigned_nbr = -nb;
        ft_putchar('-', count);
    }
    if (unsigned_nbr > size - 1)
        ft_putnbr_base(unsigned_nbr / size, sign, base_set, count);
    ft_putchar_base((unsigned_nbr % size), base_set, count);
}