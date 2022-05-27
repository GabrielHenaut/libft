/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:15:25 by ghenaut-          #+#    #+#             */
/*   Updated: 2022/05/24 00:56:47 by ghenaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t num, size_t size)
{
    void    *ptr;

    ptr = malloc(num * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, num);
    return (ptr);
}