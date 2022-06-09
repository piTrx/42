/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:15:04 by psegura-          #+#    #+#             */
/*   Updated: 2022/05/29 18:25:01 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.h"
#include <stdio.h>
int	write_number(char *str, char *to_find)
{
	int	i;
	int	j;
	int start;

	i = 0;

	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0' && str[i + j] == to_find[j])
			{
				start =i + j + 3;
				while (str[start] != '\n')
				{
					write (1, &str[start], 1);
					start++;
				}
				return (0);
			}
			j++;
		}
		i++;
	}
	return (0);
}