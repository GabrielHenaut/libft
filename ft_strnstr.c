/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:15:37 by ghenaut-          #+#    #+#             */
/*   Updated: 2022/05/23 16:26:28 by ghenaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    size_t  j;
    size_t  len;

    i = 0;
    len = ft_strlen(s2);
    while (s1[i] && i < n)
    {
        j = i;
        while (s1[j] == s2[j] && j < len)
            j++;
        if (s2[j] == '\0')
            return (&((char *)s1)[i]);
        i++;
    }
    return (NULL);
}