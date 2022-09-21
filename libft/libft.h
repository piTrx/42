/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:55:05 by pedgarci          #+#    #+#             */
/*   Updated: 2022/06/15 17:55:09 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS
#define FUNCTIONS

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int		    	ft_isalpha(int nbr);
int		    	ft_isdigit(int nbr);
int		    	ft_isalnum(int nbr);
int		   	 	ft_isascii(int nbr);
int		    	ft_isprint(int nbr);
int		    	ft_strlen(char *str);
void	        *ft_memset(void *str, int c, size_t len);
void	        ft_bzero(void *str, size_t n);
void    		*ft_memcpy(void *dst, const void *src, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int 			ft_toupper(int c);
int 			ft_tolower(int c);
char 			*ft_strchr(char *s, int c);
void    		*ft_memmove(void *dst, const void *src, size_t n);
char            *ft_strrchr(char *s, int c);

#endif