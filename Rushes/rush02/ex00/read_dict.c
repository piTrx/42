/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:04:56 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/28 13:49:52 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.h"

int read_dict(char my_dict[4096])
{
    int dict_open;
    int num_bytes;
	int i;

    dict_open = open("numbers.dict", O_RDONLY);
    num_bytes = 1;
	i = 0;
    while (num_bytes > 0)
    {
        num_bytes = read(dict_open, &my_dict[i], 1);
        i++;
	} 
	return i;
}