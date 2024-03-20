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

char	*ft_strchr(char *s, int c)
{
	int		i;
	char	letter;
	int		len;
	char	*mystring;

	len = 0;
	i = 0;
	letter = (char) c;
	mystring = s;
	while (mystring[0] != '\0')
	{
		len++;
		mystring++;
	}
	while (i <= len)
	{
		if (*s == letter)
			return (s);
		else
		{
			i++;
			s++;
		}
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	s = (char *)malloc(ft_strlen((char *) s1) + ft_strlen((char *) s2) + 1);
	if (!s1 || !s2 || !s)
		return (0);
	i = 0;
	j = 0;
	while (i < ft_strlen((char *) s1))
		s[j++] = s1[i++];
	i = 0;
	while (i < ft_strlen((char *) s2))
		s[j++] = s2[i++];
	s[j] = '\0';
	return (s);
}