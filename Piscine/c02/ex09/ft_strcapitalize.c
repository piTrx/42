/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:05:08 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/26 18:05:11 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_alphanum(char c)
{
	return (is_lower(c) || is_upper(c)
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!is_alphanum(str[i]))
			continue ;
		str[i] += ('A' - 'a') * (is_lower(str[i]));
		while (is_alphanum(str[++i]))
			str[i] += ('a' - 'A') * is_upper(str[i]);
	}
	return (str);
}
/*
int	main(void)
{
	char	string[] = "hey-hey";

	printf("%s", ft_strcapitalize(string));
	return (0);
}
*/