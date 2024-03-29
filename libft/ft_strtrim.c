/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:29:17 by pedgarci          #+#    #+#             */
/*   Updated: 2022/12/15 17:29:19 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr((char *) set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr((char *) set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
