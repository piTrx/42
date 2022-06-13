/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:01:13 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/26 18:01:16 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*root;

	if (!(str))
		return (str);
	root = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 'a' - 'A';
		str++;
	}
	return (root);
}

/*
int	main(void)
{
	char string[] = "ABC-ABC";
	char *salida;
	
	ft_strlowcase(string);
	printf("devuelve %s\n", string);
}
*/