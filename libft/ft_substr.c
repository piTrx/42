/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:53:51 by pedgarci          #+#    #+#             */
/*   Updated: 2022/11/03 17:53:54 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *result;
    int i;
    size_t j;
    if (len < ft_strlen((char *) s) - start)
        result = (char *)malloc(len + 1);
    else
        result = (char *)malloc(ft_strlen((char *) s) - start + 1);

    if (!s || !(result))
		return (0);
    i = start;
    j = 0;
    while (i < ft_strlen((char *) s) && j < len)
		result[j++] = s[i++];
	result[j] = '\0';
	return (result);
}