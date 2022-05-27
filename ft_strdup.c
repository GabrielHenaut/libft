/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:47:15 by ghenaut-          #+#    #+#             */
/*   Updated: 2022/05/24 01:00:18 by ghenaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *src) 
{
    char    *dst;
    int     len;

    len = ft_strlen(src);
    dst = malloc(len + 1);  
    if (!dst) 
        return (NULL);          
    ft_strlcpy(dst, src, len + 1);                      
    return (dst);                            
}