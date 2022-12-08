/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:47:33 by pedgarci          #+#    #+#             */
/*   Updated: 2022/08/20 18:47:39 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	letter;
    const char *mystring;
	
	i = 0;
    letter = (char) c;
    mystring = s;
    
    while (i < n)
    {
        if (*mystring == letter)
            return (char *) mystring;
        else 
        {
            i++;
            mystring++;
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
    printf("%s\n", ft_memchr(string, 'w', 15));
    string2 = "ola ke ase";
    printf("%s\n", memchr(string2, 'w', 15));
    return (0);
}
*/