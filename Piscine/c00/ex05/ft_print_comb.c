/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:05:06 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/13 13:36:04 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_three_digits(int x, int y, int z)
{
	ft_putchar(',');
	ft_putchar(' ');
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	write(1, "012", 3);
	i = '0';
	j = '1';
	k = '3';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (j > i && k > j)
				{
					write_three_digits(i, j, k);
				}
				k++;
			}
			k = j++ + 1;
		}
		j = i++ + 1;
	}	
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
