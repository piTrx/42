#include "libft.h"

int	ft_isascii(int nbr)
{
	if (nbr < 0 || nbr > 127)
		return (0);
	else
		return (1);
}
