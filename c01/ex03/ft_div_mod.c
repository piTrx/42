/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:42:26 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/19 15:42:34 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
    int x = 5;
    int y = 3;
    int quot;
    int rem;

    ft_div_mod(x, y, &quot, &rem);
    printf("el cociente de %d entre %d es = %d",x , y, quot);
    printf(" y el resto es = %d\n", rem);
    return 0;
}
*/