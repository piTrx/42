/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:41:14 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/23 16:41:18 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h> 
#include <libc.h>

int	main(void)
{
	int n = 24;
	char src[] = "hola, esto va bien.";
	int src_size = ft_strlen(src);
	char dest[n]; 
	ft_strncpy(dest, src, n);
	printf("tamaño del array origen: %d\n", src_size);
	printf("origen es \"%s\"\n", src);
	printf("destino hasta el caracter %d del origen es \"%s\"\n", n, dest);
	
	strncpy(dest, src, n);
	printf("destino hasta el caracter %d del origen es \"%s\"\n", n, dest);

	return 0;

} 
*/
