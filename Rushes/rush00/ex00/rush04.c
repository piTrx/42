/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:16:55 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/14 21:54:41 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 1;
	while (x > 0 && y > 0 && r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 && c == 1) || (r == y && c == x))
				ft_putchar('A');
			else if ((r == 1 && c == x) || (r == y && c == 1))
				ft_putchar('C');
			else if (r == 1 || r == y || c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
				c ++;
		}
		ft_putchar('\n');
		r ++;
	}
}
