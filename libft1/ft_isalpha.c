/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:57:23 by pedgarci          #+#    #+#             */
/*   Updated: 2022/06/15 17:57:27 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int nbr)
{
	if (nbr < 65 || (nbr > 90 && nbr < 97) || nbr > 122)
		return (0);
	else
		return (1);
}
