/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:45:15 by simon             #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a string to uppercase.
 *
 * This function converts the string @p src to uppercase.
 *
 * @param src The string to convert to uppercase.
 * @return The number of characters converted.
 */
int	ft_str_toupper(char *src)
{
	const int	slen = ft_strlen(src);
	int			i;

	i = 0;
	while (i < slen)
	{
		src[i] = ft_toupper(src[i]);
		i++;
	}
	return (i);
}
