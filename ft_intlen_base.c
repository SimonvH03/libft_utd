/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:58:59 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the number of characters needed
 * 	to represent an integer in a given base.
 *
 * This function returns the number of characters needed
 * 	to represent the integer @p n in the given base.
 * The base is a string of characters that represent the digits
 * 	of the number system to use.
 * The function accounts for the sign of the integer, and returns the number
 * 	of characters needed to represent the integer in the given base.
 *
 * @param n The integer to represent.
 * @param base The base to represent the integer in.
 * @return The number of characters needed
 * 	to represent the integer in the given base.
 */
int	ft_intlen_base(int n, char *base)
{
	int			len;
	const int	size = ft_strlen(base);

	len = 1;
	if (n < 0)
		len++;
	while (n >= size || n <= -size)
	{
		n = n / size;
		len++;
	}
	return (len);
}
