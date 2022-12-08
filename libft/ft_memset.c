/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:54:22 by pedgarci          #+#    #+#             */
/*   Updated: 2022/06/15 17:54:25 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t i;
	char *string;
	char character;

	string = (char *) str;
	character = (char) c;
	i = 0;
	while (i < len)
	{
		string[i] = character;
		i++;
	}
	return (string);
}