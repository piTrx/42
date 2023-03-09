/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:15:17 by pedgarci          #+#    #+#             */
/*   Updated: 2022/10/05 19:15:22 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	if (len == 0 && !h)
		return (0);
	if (n[0] == '\0')
		return ((char *) h);
	while (h[i] != '\0')
	{
		j = 0;
		while (n[j] != '\0' && h[i + j] == n[j] && k + j < len)
		{
			if (n[j + 1] == '\0')
				return ((char *) &h[i]);
			j++;
		}
		i++;
		k++;
	}
	return (0);
}

/*
int main(void)
{
	char pajar[] = "esto se acaba yaaaaa";
	char aguja[] = "acaba";
	
	
	printf("Strings to compare: %s\n%s\n\n", pajar, aguja);
	printf("Returns: %s\n", ft_strnstr(pajar, aguja, 40));
	printf("Returns: %s\n", strnstr(pajar, aguja, 40));
	
	return (0);
}
*/