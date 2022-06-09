/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:26:08 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/16 18:27:03 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_two_and_two_digits(int num1, int num2)
{
	ft_putchar(',');
	ft_putchar(' ');
	ft_putchar(num1 / 10 + 48);
	ft_putchar(num1 % 10 + 48);
	ft_putchar(' ');
	ft_putchar(num2 / 10 + 48);
	ft_putchar(num2 % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	write(1, "00 01", 5);
	num1 = 0;
	num2 = 2;
	while (num1 <= 98)
	{
		while (num2 <= 99)
		{
			if (num1 < num2)
				write_two_and_two_digits(num1, num2);
			num2++;
		}
		num1++;
		num2 = 2;
	}
	ft_putchar('\n');
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
