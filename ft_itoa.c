/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:49:29 by ghenaut-          #+#    #+#             */
/*   Updated: 2022/05/25 18:30:22 by ghenaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int num_len(int n)
{
    int size;

    size = 1;
    if (n < 0)
    {
        n *=-1;
        size++;
    }
    while (n > 9)
    {
        n /= 10;
        size++;
    }
    return (size);
}

char    *ft_itoa(int n)
{
    char    *return_str;
    int     size;
    int     i;

    size = num_len(n);
    i = 0;
    return_str = malloc(sizeof(char) * (size + 1));
    if (!return_str)
        return (NULL);
    if (n < 0)
    {
        return_str[i] = '-';
        n *= -1;
        i++;
    }
    while (n > 9)
    {
        return_str[size - 1] = (n % 10) + 48;
        n /= 10;
        size--;
    }
    return_str[size - 1] = n + 48;
    return (return_str);
}