#include "libft.h"

char *ft_strchr(char *s, int c)
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
/*
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
*/