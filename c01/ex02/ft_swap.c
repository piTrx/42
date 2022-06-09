/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:32:38 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/19 15:33:06 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	z;

	z = *a;
	*a = *b;
	*b = z;
}
/*
int main(void)
{
    int x = 1;
    int y = 2;
    printf ("x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf ("x = %d, y = %d\n", x, y);
}
*/