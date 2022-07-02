#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
if (c < 97 || c > 122)
	return (c);
else
	return (c - 32);
}

int main(void)
{
	int c;
	char letter;

	c = 123;
	letter = (char) c;
	printf("%c\n", toupper(c));
	printf("%c\n", ft_toupper(c));
	return (0);
}