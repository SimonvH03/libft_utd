/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:25:45 by simon             #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies memory area.
 *
 * This function copies @p n bytes from the memory area pointed to by @p src to
 * the memory area pointed to by @p dest. The memory areas may overlap.
 *
 * @param dest The memory area to copy to.
 * @param src The memory area to copy from.
 * @param n The number of bytes to copy.
 * @return The original value of @p dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ucdest;
	const unsigned char	*ucsrc;

	if (!dest && !src)
		return (NULL);
	i = 0;
	ucdest = (unsigned char *)dest;
	ucsrc = (const unsigned char *)src;
	if (dest < src)
	{
		while (i < n)
		{
			ucdest[i] = ucsrc[i];
			i++;
		}
	}
	else
		while (n-- > 0)
			ucdest[n] = ucsrc[n];
	return (dest);
}
