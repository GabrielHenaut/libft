/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:57:05 by ghenaut-          #+#    #+#             */
/*   Updated: 2022/05/26 20:57:37 by ghenaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    char	*str;
    char	*tmp;

    str = (char *)s;
    tmp = NULL;
    while (*str)
    {
        if (*str == (char)c)
            tmp = str;
        str++;
    }
    if (c == '\0')
        return (str);
    return (tmp);
}
