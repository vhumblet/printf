#include "ft_printf.h"

static void     ft_putchar_adress(int nb, char *base, int *count)
{
    write(1, &base[nb], 1);
    *count += 1;
}

static void     ft_put_adress(unsigned long nb, int *count)
{
    if (nb > 15)
        ft_put_adress(nb / 16, count);
    ft_putchar_adress(nb % 16, "0123456789abcdef", count);
}

void    ft_print_adress(void *adress, int *count)
{
    unsigned long   adress_tmp;

    adress_tmp = (unsigned long)adress;

    ft_putstr("0x", count);
    ft_put_adress(adress_tmp, count);
}