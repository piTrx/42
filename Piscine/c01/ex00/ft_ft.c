/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:57:22 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/18 12:57:36 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	number;

	number = 14;

	ft_ft(&number);
	printf("number vale = %d", number);
	return (0);
}
