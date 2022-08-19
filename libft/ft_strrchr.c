/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:54:22 by pedgarci          #+#    #+#             */
/*   Updated: 2022/06/15 17:54:25 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strrchr(char *s, int c)
{
    int i;
    char letter;
    int len; 
    char *mystring;

    len = 0;
    i = 0;
    letter = (char) c;
    mystring = s;
    while (mystring[0] != '\0')
    {
        len++;
        mystring++;
    }
    while (i <= len)
    {
        if (*s == letter)
            return s;
        else 
        {
            i++;
            s++;
        }
    }
    return (NULL);
}

int main (void)
{
    char *string; 
    char *string2;
    int c;

    string = "ola ke ase";
    printf("%s\n", strchr(string, 'a'));
    string2 = "ola ke ase";
    printf("%s\n", ft_strchr(string2, 'a'));
    return (0);
}