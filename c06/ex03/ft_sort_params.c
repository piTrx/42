/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:57:47 by pedgarci          #+#    #+#             */
/*   Updated: 2022/06/02 11:57:50 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	swap(char **s1, char **s2)
{
	char	*tmp;

	if (ft_strcmp(*s1, *s2) <= 0)
		return;
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	write_argv(char *argv)
{
	while (*argv)
		write (1, argv++, 1);
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (j < argc)
		{
			swap(&argv[i], &argv[j]);
			j++;
		}
		write_argv(argv[i]);
		i++;
	}
	return (0);
}
