/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:14:32 by pedgarci          #+#    #+#             */
/*   Updated: 2023/02/23 19:14:35 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list      *ft_lstnew(void *content)
{
    struct s_list *new_node;
    if (!(new_node = malloc(sizeof(struct s_list))))
        return (0);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}