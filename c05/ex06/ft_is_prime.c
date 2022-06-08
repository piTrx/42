#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb < 2)
        return (0);
    while (i <= nb / 2)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main (void)
{
    int num;

    num = 1000000;
    if (ft_is_prime(num))
        printf("El número %d es primo\n", num);
    else
        printf("El numero %d no es primo\n", num);
    return (0);
}