/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:06:06 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/17 14:47:32 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>

// void    ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

void	ft_print_numbers(void)
{
	int	i;

	i = 47;
	while (i++ < 57)
		ft_putchar(i);
	return ;
}

// int main(void)
// {
//     ft_print_numbers();
//     return (0);
// }
