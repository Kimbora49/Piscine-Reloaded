/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:06:48 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/17 11:01:32 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (nb > 0)
	{
		nb -= i;
		i += 2;
	}
	if (nb == 0)
		return (i / 2);
	return (0);
}

// int main(void)
// {
//     int i = -6;

//     while (i++ <= 125)
//         printf("%d : %d\n",i , ft_sqrt(i));
//     return (0);
// }