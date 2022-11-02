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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t k;

	i = 0;
	k = 0;
	if (needle[0] == '\0')
		return (char *) haystack;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j] && k + j < len)
		{
			if (needle[j + 1] == '\0')
				return (char *) &haystack[i];
			j++;
		}
		i++;
		k++;
	}
	return (0);
}

int main(void)
{
	char pajar[] = "esto se acaba yaaaaa";
	char aguja[] = "acaba";
	
	
	printf("Strings to compare: %s\n%s\n\n", pajar, aguja);
	printf("Returns: %s\n", ft_strnstr(pajar, aguja, 40));
	printf("Returns: %s\n", strnstr(pajar, aguja, 40));
	
	return (0);
}
