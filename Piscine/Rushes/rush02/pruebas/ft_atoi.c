#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	int	res;

	res = 0;
	while (*str > 47 && *str < 58)
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
	return (res);
	
}

int main(void)
{
	char primaveras[] = "410330";
	int res;
	res = ft_atoi(primaveras);
	printf ("%i", res);

	return(0);
}