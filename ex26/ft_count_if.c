/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:49:19 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/17 14:42:03 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int ft_count_if(char **tab, int (*f)(char*))
{
    int i;
    int counter;
    
    i = 0;
    counter = 0;
    while (tab[i] != 0)
    {
        if (f(tab[i]) == 1)
            counter++;
        i++;
    }
    return (counter);
}

// int starts_with_z(char* str)
// {
// 	return str[0] == 'z';
// }

// int main(int argc, char** argv)
// {
// 	printf("%d", ft_count_if(argv + 1, starts_with_z));
// 	if (argc < 2)
// 		return 0;
// }