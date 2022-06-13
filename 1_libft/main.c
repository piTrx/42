#include "libft.h"

int main (void)
{
	int num;

	num = 50;
    if (ft_isalpha(num) != 0)
		printf("el caracter %d es alfabetico\n", num);
	else
		printf("el caracter %d no es alfabetico\n", num);
	if (isalpha(num) != 0)
		printf("el caracter %d es alfabetico\n", num);
	else
		printf("el caracter %d no es alfabetico\n", num);
	if (ft_isdigit(num) != 0)
		printf("el caracter %d es numerico\n", num);
	else
		printf("el caracter %d no es numerico\n", num);
	if (isdigit(num) != 0)
		printf("el caracter %d es numerico\n", num);
	else
		printf("el caracter %d no es numerico\n", num);

	return (0);
}
