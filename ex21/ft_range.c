/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:31:02 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/15 10:54:07 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int *ft_range(int min, int max)
{
    int *array;
    int i;
    int j;

    array = (int *)malloc((max - min) * sizeof(int));
    if(array == NULL)
        return (0);
    i = min;
    j = 0;
    while (i < max)
    {
        array[j] = i;
        i++;
        j++;
    }
    return (array);
}

// #include <stdio.h>

// int main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*tab;
// 	int	i = 0;
// 	int	size;

// 	min = -10;
// 	max = 250;
// 	size = max - min;
// 	tab = ft_range(min, max);
// 	while(i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }
