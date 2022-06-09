/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:43:20 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/30 23:43:23 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void) //si es resultado es negativo s1 es menor que s2, estan ordenados
{
    int n;
    char *s1 = "abc";
    char *s2 = "bcd";

    n = '\0' - 'h';
    printf("ft_strcmp devuelve %d\n", ft_strcmp(s1, s2));

	printf("strcmp devuelve %d\n", strcmp(s1, s2));
    
    return(0);
}
