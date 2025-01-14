/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:37:21 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two memory areas.
 *
 * This function compares the first @p n bytes
 * 	of the memory areas @p s1 and @p s2.
 * The function returns an integer less than, equal to, or greater than zero
 * 	if the first differing byte is less than, equal to, or greater than
 * 	the byte with the same index in @p s2.
 *
 * @param s1 The first memory area to compare.
 * @param s2 The second memory area to compare.
 * @param n The number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero
 * 	if the first differing byte is less than, equal to, or greater than
 * 	the compared byte in @p s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	diff;

	while (n--)
	{
		diff = *(unsigned char *)s1++ - *(unsigned char *)s2++;
		if (diff)
			return (diff);
	}
	return (0);
}
