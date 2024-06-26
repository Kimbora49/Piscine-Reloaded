/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:05:44 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/17 11:01:11 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int main(void)
// {
//     int a = 1;
//     int b = 5;

//     ft_swap(&a, &b);
//     printf("a : %d\nb : %d\n", a, b);
// }