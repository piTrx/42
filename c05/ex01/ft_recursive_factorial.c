#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    int res;
    
    
    if (nb < 0)
        return (0);
    else if (nb <= 1)
        res = 1;
    else
    {
        res = nb * ft_recursive_factorial(nb-1);
    }   
    return (res); 
}

int main (void)
{
    int numero;

    numero = 4;
    printf("Factorial de %d es %d\n", numero, ft_recursive_factorial(numero));
    return (0);
}