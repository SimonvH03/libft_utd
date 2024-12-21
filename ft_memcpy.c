/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:20:13 by simon             #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies memory area.
 *
 * This function copies @p n bytes from the memory area pointed to by @p src to
 * the memory area pointed to by @p dest. The memory areas must not overlap.
 *
 * @param dest The memory area to copy to.
 * @param src The memory area to copy from.
 * @param n The number of bytes to copy.
 * @return The original value of @p dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ucdest;

	if (dest == NULL && src == NULL)
		return (NULL);
	ucdest = dest;
	while (n--)
		*ucdest++ = *(unsigned char *)src++;
	return (dest);
}
