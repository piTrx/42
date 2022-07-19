/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:01:25 by pedgarci          #+#    #+#             */
/*   Updated: 2022/06/20 13:01:30 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char	*source;
	unsigned char		*dest;

	source = (unsigned char *) src;
	dest = (unsigned char *) dst;
	if (source < dest)
	{
		dest += n;
		source += n;
		while (n--)
			*--dest = *--source;
	}
	else
	{
		while (n--)
		*dest++ = *source++;
	}
	return (dst);
}
