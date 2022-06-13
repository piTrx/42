#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
    char *dest; 

    dest = (char *)malloc(ft_strlen(src));
    dest = ft_strcpy(dest, src);
    return (0);
}

int main (void)
{
    char *source;
    char *dest;

    source = "hola";
    dest = ft_strdup(source);
    printf("%s\n", dest);
    return (0);
}