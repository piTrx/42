#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;
    int cuadrado;

    i = 0;
    if (nb < 0)
        return (0);
    while (i <= nb)
    {
        cuadrado = i * i;
        if (nb == cuadrado)
            return (i);
        else 
            i++;
    }
    printf("La raiz de %d no es entera\n", nb);
    return (0);
}

int main (void)
{
    int num;

    num = -144;
    if (num < 0)
    {
        printf("La raiz cuadrada de un numero negativo no existe\n");
        return (0);
    }
    printf("La raiz cuadrada de %d es %d\n", num, ft_sqrt(num));
    return (0);
}