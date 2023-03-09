/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:30:23 by pedgarci          #+#    #+#             */
/*   Updated: 2023/03/09 16:30:27 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c < 97 || c > 122)
		return (c);
	else
		return (c - 32);
}
/*
int main(void)
{
	int c;
	char letter;

	c = 123;
	letter = (char) c;
	printf("%c\n", toupper(c));
	printf("%c\n", ft_toupper(c));
	return (0);
}
*/
