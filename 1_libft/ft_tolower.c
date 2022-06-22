#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c)
{
if (c < 65 || c > 90)
	return (c);
else
	return (c + 32);
}

int main(void)
{
	int c;
	char letter;

	c = 90;
	letter = (char) c;
	printf("%c\n", tolower(c));
	printf("%c\n", ft_tolower(c));
	return (0);
}