/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:04:56 by psegura-          #+#    #+#             */
/*   Updated: 2022/05/28 13:49:52 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.h"

int	main(int argc, char **argv)
{
	
	char my_dict[4096];
	
	read_dict(my_dict);


	if (argc == 2)
		{
			int ceros;
			int *point_n;
			int i;

			i = 0;
			point_n = ft_split(argv[1]);
			ceros = 100;
			while (point_n[i] != 0)
			{
				ceros *= 10;
				i++;
			}
			i = 0;
			while (point_n[i] != 0)
			{
				if (point_n[i] > 99)
				{
					write_number(my_dict, int_to_str(point_n[i]/100));
					write (1, "hundred", 7);
					if (point_n[i] % 100 > 0 && point_n[i] % 100 < 20)
						write_number(my_dict, int_to_str(point_n[i] % 100));
					else
					{
						write_number(my_dict, int_to_str(point_n[i] % 100 - point_n[i] % 10));
						write_number(my_dict, int_to_str(point_n[i] % 10));
					}
				}
				else
				{
					if (point_n[i] % 100 > 0 && point_n[i] % 100 < 20)
						write_number(my_dict, int_to_str(point_n[i] % 100));
					else
					{
						write_number(my_dict, int_to_str(point_n[i] % 100 - point_n[i] % 10));
						write_number(my_dict, int_to_str(point_n[i] % 10));
					}
				}
				if (ceros > 999)
					write_number(my_dict, int_to_str(ceros));
				ceros /= 1000;
			}
		}
	if (argc == 3)
		{
		
		}
	return (0);
}
