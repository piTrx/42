/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:55:40 by pedgarci          #+#    #+#             */
/*   Updated: 2023/02/23 17:55:43 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if (!s || !fd)
        return;
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}