/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:23:42 by pedgarci          #+#    #+#             */
/*   Updated: 2022/06/01 16:23:45 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
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
	printf("%i", ft_atoi("   	--+-+-2147483647+9+"));
	printf("%i", atoi("   	--+-+-2147483647+9+"));
	return (0);
}
