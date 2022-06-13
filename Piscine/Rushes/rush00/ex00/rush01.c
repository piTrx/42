/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 11:51:43 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/14 21:59:37 by pedgarci         ###   ########.fr       */
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
			if ((c == 1 && r == 1) || (c == x && r == y && r != 1 && c != 1))
				ft_putchar('/');
			else if ((c == 1 && r == y) || (c == x && r == 1))
				ft_putchar('\\');
			else if (c == 1 || c == x || r == 1 || r == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			c ++;
		}
		ft_putchar('\n');
		r ++;
	}
}
