/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:44:45 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/14 15:58:46 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char *ft_strdup(char *src)
{
    char *dest;
    
    dest = (char *)malloc(ft_strlen(src + 1) sizeof(char));
    if (dest == NULL)
        return ERROR_CODE;
    
}