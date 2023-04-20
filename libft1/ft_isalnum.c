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

int	ft_isalnum(int n)
{
	if ((n < 65 || (n > 90 && n < 97) || n > 122) && (n < 48 || n > 57))
		return (0);
	else
		return (1);
}
