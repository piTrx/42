/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgarci <pedgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:55:27 by pedgarci          #+#    #+#             */
/*   Updated: 2022/05/19 20:55:31 by pedgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	z;

	z = *a / *b;
	*b = *a % *b;
	*a = z;
}
/*
int main(void)
{
    int a = 5;
    int b = 2;
    ft_ultimate_div_mod(&a, &b);
    printf("el cociente es %d = ", a);
    printf(" y el resto es = %d\n", b);
}
*/
