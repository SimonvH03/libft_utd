/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:04:03 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a byte in a memory area.
 *
 * This function locates the first occurrence of the byte @p c
 * 	in the memory area pointed to by @p s.
 * The function stops searching after @p n bytes have been examined,
 * 	and returns a pointer to the byte if found,
 * 	or NULL if the byte is not found.
 *
 * @param s The memory area to search in.
 * @param c The byte to search for.
 * @param n The number of bytes to search.
 * @return A pointer to the byte if found,
 * 	or NULL if the byte is not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
