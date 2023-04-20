/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:59:18 by pedgarci          #+#    #+#             */
/*   Updated: 2022/12/15 16:59:22 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	s = (char *)malloc(ft_strlen((char *) s1) + ft_strlen((char *) s2) + 1);
	if (!s1 || !s2 || !s)
		return (0);
	i = 0;
	j = 0;
	while (i < ft_strlen((char *) s1))
		s[j++] = s1[i++];
	i = 0;
	while (i < ft_strlen((char *) s2))
		s[j++] = s2[i++];
	s[j] = '\0';
	return (s);
}
