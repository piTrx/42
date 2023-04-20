/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:07:21 by pedgarci          #+#    #+#             */
/*   Updated: 2022/10/20 19:07:24 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*v;
	size_t	i;
	size_t	total;

	i = 0;
	total = count * size;
	if (total < count || total < size)
		return (NULL);
	v = (char *)malloc(total);
	if (v == NULL)
		return (NULL);
	while (i < total)
	{
		v[i] = '\0';
		i++;
	}
	return (v);
}

/*int main(void) {

	char *string;
	string = ft_calloc(3, 5);
	string[14] = 'a';
	return (0);

}
*/