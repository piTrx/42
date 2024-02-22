/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:10:22 by pedgarci          #+#    #+#             */
/*   Updated: 2023/02/22 19:10:26 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	int_len(int n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len += 1;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	number;
	unsigned int	len;

	len = int_len(n);
	string = (char *)malloc((len + 1) * sizeof(char));
	if (!string)
		return (0);
	if (n < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		string[0] = '0';
	string[len] = '\0';
	while (number != 0)
	{
		string[len - 1] = number % 10 + 48;
		number = number / 10;
		len --;
	}
	return (string);
}
/*
int main (void)
{
    int num;

    num = 3435636;
    printf("el numero %d es el string %s\n", num, ft_itoa(num));
    return(0);
}*/