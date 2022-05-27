/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:42:13 by ghenaut-          #+#    #+#             */
/*   Updated: 2022/05/23 20:57:27 by ghenaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isalpha(int ch)
{
    if ((ch < 'a' || ch > 'z') && (ch < 'A' || ch > 'Z'))
		return (0);
	return (1024);
}