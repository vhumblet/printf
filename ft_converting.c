#include "ft_printf.h"

int     ft_convertion(char c)
{
    char    *lst_conversion;

    lst_conversion = "cspdiuxX%";
    while (*lst_conversion)
        if (c == *lst_conversion++)
            return (1);
    return (0);
}

void    ft_converting(char c, va_list arg, int *count)
{
    if (c == 'c')
        ft_putchar(va_arg(arg, int), count);
    else if (c == 's')
        ft_putstr(va_arg(arg, char *), count);
    else if (c == 'p')
        ft_print_adress(va_arg(arg, void *), count);
    else if (c == 'd')
        ft_putnbr_base(va_arg(arg, int), SIGNE, DECIMAL, count);
    else if (c == 'i')
        ft_putnbr_base(va_arg(arg, int), SIGNE, DECIMAL, count);
    else if (c == 'u')
        ft_putnbr_base(va_arg(arg, unsigned int), UNSIGNE, DECIMAL, count);
    else if (c == 'x')
        ft_putnbr_base(va_arg(arg, int), UNSIGNE, LOWER_EXADECIMAL, count);
    else if (c == 'X')
        ft_putnbr_base(va_arg(arg, int), UNSIGNE, UPPER_EXADECIMAL, count);
    else if (c == '%')
        ft_putchar('%', count);
}