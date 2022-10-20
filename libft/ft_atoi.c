/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:18:31 by pedgarci          #+#    #+#             */
/*   Updated: 2022/10/19 12:18:34 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	count;
	int	sign;
	int	result;

	count = 0;
	sign = 1;
	result = 0;
	while ((str[count] >= '\t' && str[count] <= '\r') || str[count] == ' ')
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = (str[count]) - '0' + (result * 10);
		count++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("%i\n", ft_atoi("2147483647+9+"));
    printf("%i\n", atoi("2147483647+9+"));
	return (0);
}

