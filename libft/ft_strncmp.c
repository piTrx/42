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
	char *mystring1;
	char *mystring2;

	i = 0;
	mystring1 = s1;
	mystring2 = s2;
	while ((mystring1[i] != '\0' || mystring2[i] != '\0') && n > 0)
	{
		if (mystring1[i] > mystring2[i])
			return ((unsigned char)mystring1[i] - mystring2[i]);
		else if (mystring1[i] < mystring2[i])
			return ((unsigned char)mystring1[i] - mystring2[i]);
		i++;
		n--;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char fir[] = "I'll compare this";
	char sec[] = "I'll compare this, but not this";
	unsigned int n;

	n = 18;
	printf("How it started: %s\n%s\n\n", fir, sec);
	//recive = ft_strcpy(sec, fir);
	printf("Returns: %d\n", ft_strncmp("I'll compare this", "I'll compare this, but not this", n));
	printf("Returns: %d\n", strncmp("I'll compare this", "I'll compare this, but not this", n));
	return (0);
}
*/
