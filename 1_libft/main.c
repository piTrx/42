#include "libft.h"

int main (void)
{
	int num;
    char *test = "test this out";

	num = 93;
    if (ft_isalpha(num) != 0)
		printf("el caracter %d es alfabetico\n", num);
	else
		printf("el caracter %d no es alfabetico\n", num);
	if (ft_isdigit(num) != 0)
		printf("el caracter %d es numerico\n", num);
	else
		printf("el caracter %d no es numerico\n", num);
    if (ft_isalnum(num) != 0)
        printf("el caracter %d es alfanumerico\n", num);
    else 
        printf("el caracter %d no es alfanumerico\n", num);
    if (ft_isascii(num) != 0)
        printf("el caracter %d es ascii\n", num);
    else 
        printf("el caracter %d no es ascii\n", num);
    if (ft_isprint(num) != 0)
        printf("el caracter %d es imprimible\n", num);
    else 
        printf("el caracter %d no es imprimible\n", num);
    printf("la longitud del string \"%s\" es %d\n", test, ft_strlen(test));
    return (0);
}
