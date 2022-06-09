/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:29:14 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/25 18:29:30 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 65 || (*str > 90 && *str < 97) || *str > 122)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "AAAAA";
	
	printf("para la cadena \"%s\" devuelve %d\n", string, ft_str_is_alpha(string));
}
*/