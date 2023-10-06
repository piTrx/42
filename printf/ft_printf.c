#include <stdarg.h>
#include <stdio.h>
#include <unistd.h> 

int ft_print_char(int c)
{
    return write(1, &c, 1);
}

int ft_print_str(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        ft_print_char((int)*str);
        ++str;
        ++count;
    }
    return count;
}
int ft_eval_format(char specifier, va_list args)
{
    int count;

    count = 0;
    if (specifier == 'c')
        count += ft_print_char(va_arg(args, int));
    else if (specifier == 's')
        count += ft_print_str(va_arg(args, char*));
    else 
        count += write (1, &specifier, 1);
    return count;
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int i;
    int count;
    va_start(args, format);

    i = 0;
    count = 0;  
    while (format[i])
    {
        if (format[i]  == '%')
            count += ft_eval_format(format[++i], args); 
        else
            count += write(1, &format[i], 1);
        ++i;
    }
    va_end(args);
    return count;
    
}

int main()
{
    ft_printf("Hello %s, my name starts by %e\n", "Peter", 'P');
    printf("Hello %s, my name starts by %e\n", "Peter", 'P');
    return (0);
}


