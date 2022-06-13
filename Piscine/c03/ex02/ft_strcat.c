/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:06:52 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/31 13:06:55 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		dest_size;
	char	*temp;

	dest_size = 0;
	temp = dest;
	while (*dest)
	{
		dest_size++;
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
	char destino[34] = "Copy me pls ";
	char origen[] = "Get out";

	printf("Antes: \n%s\n%s\n\n", destino, origen);
	
	printf("Despues: \n%s", ft_strcat(destino, origen));
	return (0);
}
*/