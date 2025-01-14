/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:32:41 by simon             #+#    #+#             */
/*   Updated: 2024/03/24 00:23:52 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the sign of an integer.
 *
 * This function returns the sign of the given integer.
 * If the integer is negative, -1 is returned.
 * If the integer is positive, 1 is returned.
 * If the integer is zero, 0 is returned.
 *
 * @param value The integer to get the sign of.
 * @return The sign of the given integer.
 */
int
	ft_sign(
		int value)
{
	if (value < 0)
		return (-1);
	if (value > 0)
		return (1);
	return (0);
}
