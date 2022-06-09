/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:34:39 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/22 23:34:44 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	create_buildings(int buildings[4][4]);

void	check_input_4(int input[16], int buildings[4][4])
{
	int	row;
	int	col;
	int	vec_index;

	row = 0;
	col = 0;
	vec_index = 0;
	while (vec_index < 16)
	{
		if (input[vec_index] == 4 && vec_index < 4)
		{
			row = 0;
			while (row < 4)
			{
				buildings[row][vec_index] = row + 1;
				row++;
			}
		}
		vec_index++;
	}
}

void	print_buildings(int buildings[4][4])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		while (col < 4)
		{
			printf("%d ", buildings[row][col]);
			col++;
		}
		col = 0;
		printf("\n");
		row++;
	}
}

int	compare_lines(int str[16])
{
	int	flag;
	int	i;

	flag = 0;
	i = 0;
	while (i < 4)
	{
		if ((str[i] == 4 && str[i + 4] == 4) || (str[i] == 3 && str[i + 4] == 3)
			|| (str[i] == 1 && str[i + 4] == 1))
			flag = 1;
		else
			flag = 0;
		i++;
	}
	i = 7;
	while (i < 11)
	{
		if ((str[i] == 4 && str[i + 4] == 4) || (str[i] == 3 && str[i + 4] == 3)
			|| (str[i] == 1 && str[i + 4] == 1))
			flag = 1;
		else
			flag = 0;
		i++;
	}
	return (flag);
}

void	input_to_int(char *numbers, int input[16])
{
	int	char_counter;
	int	numbers_counter;

	char_counter = 0;
	numbers_counter = 0;
	while (numbers[numbers_counter] != '\0')
	{
		if (numbers[numbers_counter] != 32)
		{
			input[char_counter] = (int)numbers[numbers_counter] - 48;
			char_counter++;
		}
		numbers_counter++;
	}
}

int	main(int argc, char *argv[])
{
	int	input[16];
	int	*recive;
	int	buildings[4][4];

	if (argc != 2)
		return (write(1, "Input Error!\n", 13));
	input_to_int(argv[1], input);
	recive = input;
	if (compare_lines(recive) == 0)
		input_to_int(argv[1], input);
	else
		return (write(1, "Input Error!\n", 13));
	create_buildings(buildings);
	check_input_4(input, buildings);
	print_buildings(buildings);
	return (0);
}
