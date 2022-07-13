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
#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    //falta comprobar que pasa en caso de overlap
	size_t i;
	char *source;
	char *dest;
	char *rtn;

	source = (char *) src;
	rtn = (char *) dst;
	dest = (char *) dst;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (rtn);
}

int main (void)
{
	char src[50];
	char dst[50];

	strcpy(dst,"hola ke ase");
    strcpy(src,"This is the test for memmove");
    puts(src);
    memmove(dst, src, 28);
    printf("%s\n", dst);
    return (0);
}


