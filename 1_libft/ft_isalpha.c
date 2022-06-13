#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int nbr)
{
	if (nbr < 65 || (nbr > 90 && nbr < 97) || nbr > 122)
		return (0);
	else
		return (1);
}

int main (void)
{
	int num;

	num = 130;
	if (ft_isalpha(num) != 0)
		printf("el caracter %d es alfabetico\n", num);
	else
		printf("el caracter %d no es alfabetico\n", num);
	if (isalpha(num) != 0)
		printf("el caracter %d es alfabetico\n", num);
	else
		printf("el caracter %d no es alfabetico\n", num);

	return (0);
}