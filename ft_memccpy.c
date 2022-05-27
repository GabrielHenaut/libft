/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:33:39 by ghenaut-          #+#    #+#             */
/*   Updated: 2022/05/27 04:19:47 by Ghenaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	int		found;

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
