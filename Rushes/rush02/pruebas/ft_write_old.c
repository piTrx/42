/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_09.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:15:04 by psegura-          #+#    #+#             */
/*   Updated: 2022/05/29 20:37:33 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.h"

char ft_write_09(int nb)
{
	char c;

	c = nb + '0';
	return (c);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (0);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0' && str[i + j] == to_find[j])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char *dic;
	dic = "\n0: zero\n1: one\n2: two\n3: three\n4: four\n5: five\n6: six\n7: seven\n8: eight\n9: nine\n10: ten\n11: eleven\n12: twelve\n13: thirteen\n14: fourteen\n15: fifteen\n16: sixteen\n17: seventeen\n18: eighteen\n19: nineteen\n";
	char	to_find[] = "2";

	printf("Buscar en: %s \n", dic);
	printf("Busca: %s \n", to_find);
	printf("Resultado:\n%s", ft_strstr(dic, to_find));
}
