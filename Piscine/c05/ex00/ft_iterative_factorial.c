#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int res;
    int numero; 

    numero = nb;
    res = 1;
    if (nb < 0)
        return (0);
    else if (nb == 1)
        return (1);
    else 
    {
        while (nb > 0)
        {
            res = res * nb;
            nb--;
        }
        return (res);
    }
}

int main (void)
{
    int numero;

    numero = 16;
    printf("Factorial de %d es %d\n", numero, ft_iterative_factorial(numero));
    return (0);
}

