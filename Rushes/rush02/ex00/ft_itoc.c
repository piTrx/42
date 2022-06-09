#include <stdio.h>
#include <stdlib.h>


char    *int_to_str(int nbr)
{
    int contador;
    int aux;

    contador = 0;
    aux = nbr;
    while(aux > 0)
    {
        aux/= 10;
        contador ++;
    }
    char *s1;
    s1 = malloc(sizeof(char) * (contador + 1));
    while (nbr > 0)
    {
        s1[contador -1] = (nbr % 10) + 48;
        nbr /= 10;
        contador--;
    }
    return(s1);
}
