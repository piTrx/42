/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:28:35 by pedgarci          #+#    #+#             */
/*   Updated: 2023/03/09 16:28:49 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c < 65 || c > 90)
		return (c);
	else
		return (c + 32);
}
/*
int main(void)
{
	int c;
	char letter;

	c = 90;
	letter = (char) c;
	printf("%c\n", tolower(c));
	printf("%c\n", ft_tolower(c));
	return (0);
}
*/
