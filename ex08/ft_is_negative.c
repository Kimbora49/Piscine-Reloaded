/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:05:59 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/17 11:01:00 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>

// void    ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

void	ft_is_negative(int nb)
{
	if (nb < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

// int main(void)
// {
//     ft_is_negative(0);
//     return (0);
// }
