/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:25:24 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/31 18:25:27 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	s = 0;
	i = 0;
	while (dest[d])
		d++;
	while (src[s])
		s++;
	if (size <= d)
		return (s + size);
	while (src[i] && (d + i) < (size -1))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (s + d);
}
/*
int	main(void)
{
	char			src[] = "abcdefghi";
	char			dest_[60] = "123456789";
	char			dest0[60] = "123456789";
	unsigned int	size;
	size = 16;
	printf("strlcat (ft): %lu\n", strlcat(dest_, src, size));
	printf("strlcat (dest_): %s\n\n", dest_);
	printf("ft_strlcat (ft): %u\n", ft_strlcat(dest0, src, size));
	printf("ft_strlcat (dest0): %s\n", dest0);
    return (0);
}
*/