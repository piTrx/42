/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:54:22 by pedgarci          #+#    #+#             */
/*   Updated: 2022/06/15 17:54:25 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	size_t	i;
	char	letter;
	char	*string;

	i = 0;
	letter = (char) c;
	string = s + ft_strlen(s);
	while (i <= ft_strlen(s))
	{
		if (*string == letter)
			return (string);
		else
		{
			i++;
			string--;
		}
	}
	return (NULL);
}

/*
int main (void)
{
    char *string; 
    char *string2;

    string = "ola ke ase";
    printf("%s\n", strrchr(string, 'a'));
    string2 = "ola ke ase";
    printf("%s\n", ft_strrchr(string2, 'a'));
    return (0);
}
*/