/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:40:23 by pedgarci          #+#    #+#             */
/*   Updated: 2022/06/20 12:40:28 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*dest;
	char	*rtn;

	source = (char *) src;
	rtn = (char *) dst;
	dest = (char *) dst;
	i = 0;
	if (source == NULL && dest == NULL)
		return (rtn);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (rtn);
}

/*int main (void)
{
	char src[50];
	char dst[50];

	strcpy(dst,"hola ke asefgsdfgfgsdfgsdfgsdgsdgs");
    strcpy(src,"This is the test for memcpy");
    puts(src);
    memcpy(dst, src, 5);
    printf("%s\n", dst);
    return (0);
}
*/