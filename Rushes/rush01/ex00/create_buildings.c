/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_buildings.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:36:47 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/22 23:37:02 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	create_buildings(int buildings[4][4])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		while (col < 4)
		{
			buildings[row][col] = 0;
			col++;
		}
		col = 0;
		row++;
	}
}
