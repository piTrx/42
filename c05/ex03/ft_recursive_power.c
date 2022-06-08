#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    int res;
    
    res = 1;
    if (nb < 0 || power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else
        res = nb * ft_recursive_power(nb, power - 1);
    return (res);
}

int main (void)
{
    printf("%d elevado a %d es = %d\n", 3, 5, ft_recursive_power(3, 5));
    return (0);
}