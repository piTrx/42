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

int ft_find_next_prime(int nb)
{ 
    int next_prime;

    next_prime = nb + 1;
    while (ft_is_prime(next_prime) == 0)
        next_prime++;
    return (next_prime);
}

int main (void)
{
    int num;
    
    num = 2;
    while (num < 100)
    {
        printf("El numero primo más próximo a %d es %d\n", num, ft_find_next_prime(num));
        num++;
    }
    return (0);
}