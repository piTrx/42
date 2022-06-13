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
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > 0)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
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

	n = 25;
	printf("How it started: %s\n%s\n\n", fir, sec);
	//recive = ft_strcpy(sec, fir);
	printf("Returns: %d\n", ft_strncmp(fir, sec, n));
	printf("Returns: %d", strncmp(fir, sec, n));
	return (0);
}
*/