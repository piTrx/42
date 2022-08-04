/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:55:11 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/30 16:55:15 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

int main(void)
{
    char dest[20];
    char dest2[20];
    char src[] = "me cago en Buda ";
    ft_strlcpy(dest, src, 8);
    printf("Origen: %s\n", src);
    printf("Destino: %s\n", dest);
    strlcpy(dest2, src, 8);
    printf("Con la funcion original: %s\n", dest2);
    return(0);
}
