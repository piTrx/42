#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int res;
    
    res = 1;
    if (nb < 0 || power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else
    {
        while (power > 0)
        {
            res = res * nb;
            power--;
        }
        return (res);
    }  
}

int main (void)
{
    printf("%d elevado a %d es = %d\n", 3, 5, ft_iterative_power(3, 5));
    return (0);
}