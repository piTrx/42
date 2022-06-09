/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:50:00 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/19 23:50:04 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
    int size;
    int tab[7];
	int i;

	size = 7;

    
    i = 0;
    while (i < size)
    {
        printf("Introduce numero %d: ", i+1);
        scanf("%d", &tab[i]);
        i++;
    }
    i = 0;
    while (i < size)
    {
        printf("tab[%d]= %d\n", i, tab[i]);
        i++;
    }
    printf("\n");
    ft_rev_int_tab(tab, size);
	printf("El array invertido quedaria asi: \n");
    i = 0;
    while (i < size)
    {
        printf("tab[%d]= %d\n", i, tab[i]);
        i++;
    }
    return (0);
}
*/