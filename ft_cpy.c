/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:01:12 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a string to a buffer.
 *
 * This function copies @p n characters from the string @p add to the buffer
 * @p out. The buffer must be large enough to hold the copied string.
 *
 * @param out The buffer to copy the string to.
 * @param add The string to copy.
 * @param n The number of characters to copy.
 * @return The number of characters copied.
 */
int	ft_cpy(char *out, const char *add, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		out[i] = add[i];
		i++;
	}
	return (n);
}
