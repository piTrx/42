/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:02:54 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/31 14:03:12 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_size;
	char			*temp;
	unsigned int	i;

	dest_size = 0;
	temp = dest;
	i = 0;
	while (*dest)
	{
		dest_size++;
		dest++;
	}
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (temp);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char fir[100] = "I hope";
	char sec[] = " This works";
	unsigned int n;
	char *recive;
	
	n = 5;
	printf("How it started: %s\n%s\n\n", fir, sec);
	recive = ft_strncat(fir, sec, n);
	printf("Returns: %s", recive);
	return (0);
}
*/