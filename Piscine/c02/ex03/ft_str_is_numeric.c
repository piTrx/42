/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:52:14 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/26 15:52:21 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	int		rtn;

	s1 = "23216660";
	s2 = "k5467hhhh0";
	s3 = "0";
	rtn = ft_str_is_numeric(s1);
	printf("%d\n", rtn);
	rtn = ft_str_is_numeric(s2);
	printf("%d\n", rtn);
	rtn = ft_str_is_numeric(s3);
	printf("%d\n", rtn);
}
