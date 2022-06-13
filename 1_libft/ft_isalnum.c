#include "libft.h"

int	ft_isalnum(int nbr)
{
	if (ft_isalpha(nbr) == 0 && ft_isdigit(nbr) == 0)
		return (0);
	else
		return (1);
}
