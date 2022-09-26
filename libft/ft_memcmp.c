/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:39:54 by pedgarci          #+#    #+#             */
/*   Updated: 2022/09/26 20:40:01 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	const char *mystring1;
	const char *mystring2;

	i = 0;
	mystring1 = s1;
	mystring2 = s2;

	while (i < n)
	{
		if (mystring1[i] > mystring2[i])
			return (mystring1[i] - mystring2[i]);
		else if (mystring1[i] < mystring2[i])
			return (mystring1[i] - mystring2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char fir[] = "I'll compare thidsfhfhsfh";
	char sec[] = "I'll compare thisd";
	unsigned int n;

	n = 17;
	printf("How it started: %s\n%s\n\n", fir, sec);
	//recive = ft_strcpy(sec, fir);
	printf("Returns: %d\n", ft_memcmp(fir, sec, n));
	printf("Returns: %d\n", memcmp(fir, sec, n));
	return (0);
}


