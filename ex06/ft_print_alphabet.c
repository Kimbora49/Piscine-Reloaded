/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:06:12 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/17 17:15:32 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>

// void    ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

void    ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	i;

	i = 96;
	while (i++ < 122)
		ft_putchar(i);
	return ;
}

// int main(void)
// {
//     ft_print_alphabet();
//     return (0);
// }
