/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:45:15 by simon             #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates two strings.
 *
 * This function appends the string @p src to the end of the string @p dest.
 *
 * @param dest The destination string.
 * @param src The source string to append.
 * @return The number of characters appended.
 */
int	ft_strcat(char *dest, const char *src)
{
	const int	dlen = ft_strlen(dest);
	const int	slen = ft_strlen(src);
	int			i;

	i = 0;
	while (i < slen)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	return (i);
}
