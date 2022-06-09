#include "functions.h"

int	*ft_split(int nbr)
{
	int	size_nbr;
	int	size_tab;
	int	*tab_nbr;
	int	n;

	n = nbr;
	size_nbr = 0;
	size_tab = 0;
	while (n > 0)
	{
		size_nbr++;
		n /= 10;
	}
	if (size_nbr % 3 == 0)
		size_tab = size_nbr / 3;
	else
		size_tab = (size_nbr / 3) + 1;
	tab_nbr = malloc(sizeof(int) * size_tab);
	while (size_tab - 1 >= 0)
	{
		tab_nbr[size_tab - 1] = nbr % 1000;
		nbr /= 1000;
		size_tab--;
	}
	return (tab_nbr);
}

int	main(void)
{
	int	*point_n;
	point_n = ft_split(21234067);
	printf("%i", point_n[2]);
	return (0);
}