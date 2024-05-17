/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:01:12 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/17 11:38:09 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	i = nb - 1;
	while (i > 1)
		nb *= i--;
	return (nb);
}

// int main(void)
// {
//     printf("%d", ft_iterative_factorial(0));
//     return (0);
// }