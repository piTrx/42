/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:55:26 by pedgarci          #+#    #+#             */
/*   Updated: 2022/06/15 17:55:33 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int nbr)
{
	if (ft_isalpha(nbr) == 0 && ft_isdigit(nbr) == 0)
		return (0);
	else
		return (1);
}
