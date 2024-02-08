# include "get_next_line.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*string;

	string = (char *) str;
	i = 0;
	while (i < n)
	{
		string[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (size == SIZE_MAX || count == SIZE_MAX)
		return (NULL);
	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}