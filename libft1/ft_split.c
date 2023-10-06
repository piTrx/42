/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:44:31 by pedgarci          #+#    #+#             */
/*   Updated: 2022/12/21 12:44:40 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(char const *s1, char c)
{
	int	count;
	int	trigger;

	count = 0;
	trigger = 0;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == c)
			trigger = 0;
		else if (trigger == 0)
		{
			trigger = 1;
			count++;
		}
		s1++;
	}
	return (count);
}

static int	count_chars(char const *s2, char c, int i)
{
	int	length;

	length = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

static char	**free_up(char const **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free(dst);
	return (NULL);
}

static char	**matrix(char const *s, char **dst, char c, int l)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < l)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dst[j] = (char *)malloc(sizeof(char) * count_chars(s, c, i) + 1);
		if (dst[j] == NULL)
			return (free_up((char const **)dst, j));
		while (s[i] != '\0' && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		l;

	if (s == NULL)
		return (NULL);
	l = count_words(s, c);
	dst = (char **)malloc(sizeof(char *) * (l + 1));
	if (dst == NULL)
		return (NULL);
	return (matrix(s, dst, c, l));
}
	