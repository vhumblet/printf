#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

# define DECIMAL "0123456789"
# define UPPER_EXADECIMAL "0123456789ABCDEF"
# define LOWER_EXADECIMAL "0123456789abcdef"
# define SIGNE 1
# define UNSIGNE 0

int     ft_strlen(char *str);
void    ft_putchar(char c, int *count);
void    ft_putstr(char *str, int *count);
void    ft_putnbr(int nb, int *count);
void    ft_putnbr_base(int nb, int sign, char *base_set, int *count);
void    ft_print_adress(void *adress, int *count);
int     ft_convertion(char c);
void    ft_converting(char c, va_list arg, int *count);
int     ft_printf(const char *str, ...);

#endif