/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:00:17 by pedgarci          #+#    #+#             */
/*   Updated: 2022/06/20 12:00:24 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
    size_t i;
	char *string;
	
	string = (char *) str;
	i = 0;
	while (i < n)
	{
		string[i] = '\0';
		i++;
	}
}
/*
int main(void)
{
    char str[50];

    strcpy(str,"This is the test for bzero");
    puts(str);
    ft_bzero(str, 1);
    printf("%c", str[1]);
    return (0);
}
*/