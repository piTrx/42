#include <stdio.h>

int ft_fibonacci(int index)
{ 
    if (index < 0)
        return (-1);
    if (index < 2)
        return (index);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));   
}

int main (void)
{
    printf("El indice %d de la serie de Fibonacci es = %d\n", 11, ft_fibonacci(11));
    return (0);
}