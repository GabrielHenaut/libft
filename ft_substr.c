/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:22:03 by ghenaut-          #+#    #+#             */
/*   Updated: 2022/05/24 01:03:53 by ghenaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t              i;
    char                *sub_str;
    unsigned int        size;

    i = 0;
    size = ft_strlen(s);
    sub_str = malloc(len * sizeof(char));
    if (!(sub_str) || s[0] == '\0' || size < start)
        return (NULL);
    while(s[i + start] && i < len)
    {
        sub_str[i] = s[i + start];
        i++;
    }
    sub_str[i] = '\0';
    return (sub_str);
}
