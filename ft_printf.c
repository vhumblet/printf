#include "ft_printf.h"

int     ft_printf(const char *str, ...)
{
    va_list     arg;
    int         count;
    int         i;

    va_start(arg, str);
    i = -1;
    count = 0;
    while (str[++i])
    {
        if (str[i] == '%' && ft_convertion(str[i + 1]))
            ft_converting(str[++i], arg, &count);
        else if (str[i] == '%' && !ft_convertion(str[i + 1]))
            i++;
        else
            ft_putchar(str[i], &count);
    }
    va_end(arg);
    return (count);
}