#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int nbr)
{
	if (nbr < 48 || nbr > 57)
		return (0);
	else
		return (1);
}

int main (void)
{
	int num;

	num = 59;
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