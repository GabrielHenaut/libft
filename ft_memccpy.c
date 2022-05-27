/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:33:39 by ghenaut-          #+#    #+#             */
/*   Updated: 2022/05/21 14:26:02 by ghenaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
    size_t  i;
    int     found;

    i = 0;
    found = 0;
    while (i < n)
    {
        if (((char *)src)[i] == c)
        {
            found = 1;
            break ;
        }
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    if (found)
        return (dest + i + 1);
    return (NULL);
}