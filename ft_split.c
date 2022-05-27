/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 22:29:10 by ghenaut-          #+#    #+#             */
/*   Updated: 2022/05/26 16:55:57 by ghenaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  word_count(char const *s, char c)
{
    int i;
    int in_word;
    int count;

    i = 0;
    in_word = 0;
    count = 0;
    while (s[i] && i++)
    {
        if (s[i] == c && !(in_word))
            continue ;
        if (s[i] != c && in_word)
            continue ;
        if (s[i] != c && !(in_word))
        {
            in_word = 1;
            count++;
            continue ;
        }
        if (s[i] == c && in_word)
            in_word = 0;
    }
    return (count);
}

#include <stdio.h>
static char *alloc_word(const char *str, char c)
{
    int     size;
    char    *word;
    int     i;

    i = 0;
    size = 0;
    while (str[size] != c)
        size++;
    word = malloc(sizeof(char) * (size + 1));
    if (!word)
        return (NULL);
    while (str[i] != c)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char    **return_str;
    int     i;
    int     j;

    i = 0;
    j = 0;
    return_str = malloc(sizeof(return_str) * (word_count(s, c) + 1));
    if (!return_str)
        return(NULL);
    while (s[i])
    {
        if (s[i] != c)
        {
            return_str[j] = alloc_word(&s[i], c);
            j++;
            while (s[i] != c)
                i++;
        }
        i++;
    }
    return_str[j] = NULL;
    return (return_str);
}
