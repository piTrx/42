#include "functions.h"

char    *ft_strncpy(char *dest, char *src, int n)
{
    int    cont;

    cont = 0;
    while (cont < n && src[cont] != 0)
    {
        dest[cont] = src[cont];
        cont++;
    }
    while (cont < n)
    {
        dest[cont] = '\0';
        cont++;
    }
    dest[cont] = '\0';
    return (dest);
}

int ft_atoi(char *str)
{
    int    res;

    res = 0;
    while (*str > 47 && *str < 58)
    {
        res = (res * 10) + (*str - 48);
        str++;
    }
    return (res);
    
}

int    *ft_split(char *nbr)
{
    int    size_nbr;
    int    size_tab;
    int    *tab_nbr;

    char *point_n;
    size_nbr = 0;
    size_tab = 0;
    while (nbr[size_nbr] != 0)
    {
        size_nbr++;
    }
    if (size_nbr % 3 == 0)
        size_tab = size_nbr / 3;
    else
        size_tab = (size_nbr / 3) + 1;
    tab_nbr = malloc(sizeof(int) * size_tab);
    point_n = malloc(sizeof(char) * size_nbr + 1);
    ft_strncpy(point_n, nbr, size_nbr);
    while (size_tab > 0)
    {
        if (size_nbr > 2)
            tab_nbr[size_tab - 1] = ft_atoi(point_n + size_nbr - 3);
        else
            tab_nbr[size_tab - 1] = ft_atoi(point_n);
        ft_strncpy(point_n, nbr,(size_nbr - 3));
        size_nbr -= 3;
        size_tab--;
    }
    return (tab_nbr);
}

/*
int    main(void)
{
    int    *point_n;
	int cont = 0;
    point_n = ft_split("21234556886649559874593874593847523432432423423423423425652623523234235252934856793487520399404239084023948102");
    while (point_n[cont])
	{
		printf("%i \n", point_n[cont]);
		cont++;
	}

	//printf("%i", point_n[9]);
    return (0);
}
*/