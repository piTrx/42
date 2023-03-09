/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:59:23 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/31 12:59:26 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			*mystring1;
	char			*mystring2;

	i = 0;
	mystring1 = s1;
	mystring2 = s2;
	while ((mystring1[i] != '\0' || mystring2[i] != '\0') && n > 0)
	{
		if (mystring1[i] > mystring2[i])
			return ((unsigned char)mystring1[i] - (unsigned char)mystring2[i]);
		else if (mystring1[i] < mystring2[i])
			return ((unsigned char)mystring1[i] - (unsigned char)mystring2[i]);
		i++;
		n--;
	}
	return (0);
}
