/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:43:10 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/26 16:43:12 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*root;

	if (!str)
		return (str);
	root = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str += 'A' - 'a';
		str++;
	}
	return (root);
}
/*
int	main(void)
{
	char string[] = "-";
	char *salida;
	
	ft_strupcase(string);
	printf("%s\n", string);
}
*/
