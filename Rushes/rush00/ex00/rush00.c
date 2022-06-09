/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid.comr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:39:11 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/14 22:01:42 by pedgarci         ###   ########.fr       */
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
			if ((r == 1 && c == 1) || (r == 1 && c == x))
				ft_putchar('o');
			else if ((r == y && c == 1) || (r == y && c == x))
				ft_putchar('o');
			else if (r == 1 || r == y)
				ft_putchar('-');
			else if (c == 1 || c == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			c ++;
		}
		ft_putchar('\n');
		r ++;
	}
}
