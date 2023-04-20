/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:35:32 by pedgarci          #+#    #+#             */
/*   Updated: 2022/11/02 19:35:35 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*string;

	len = 0;
	i = 0;
	len = ft_strlen((char *) s1);
	string = (char *)malloc(len * sizeof(char) + 1);
	if (string == NULL)
		return (NULL);
	while (i < len)
	{
		string [i] = s1[i];
		i++;
	}
	string [len] = '\0';
	return (string);
}
