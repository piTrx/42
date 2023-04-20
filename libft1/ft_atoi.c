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
#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	count;
	int				sign;
	unsigned long	result;

	count = 0;
	sign = 1;
	result = 0;
	while ((str[count] >= '\t' && str[count] <= '\r') || str[count] == ' ')
		count++;
	if (str[count] == '+' || str[count] == '-')
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
	return ((int)(result * sign));
}

/*
int	main(void)
{
	printf("%i\n", ft_atoi("21474836488"));
    printf("%i\n", atoi("21474836488"));
	printf("%i\n", ft_atoi("99999999999999999999999999"));
    printf("%i\n", atoi("99999999999999999999999999"));
	return (0);
}

*/