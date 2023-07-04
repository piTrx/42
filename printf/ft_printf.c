#include <stdarg.h>

int ft_printf(const char *format, ...)

{
    va_list args;
    int i;
    int ret;

    i = -1;
    va_start(args, format);
    while (format[i++])
    {
        if (format[i]  == '%')
    }
}