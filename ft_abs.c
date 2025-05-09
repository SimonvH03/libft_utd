/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:32:43 by simon             #+#    #+#             */
/*   Updated: 2024/03/24 00:23:44 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the absolute value of an integer.
 *
 * This function returns the absolute value of the given integer.
 * If the integer is negative, its negation is returned.
 *
 * @param value The integer to get the absolute value of.
 * @return The absolute value of the given integer.
 */
int
	ft_abs(
		int value)
{
	if (value < 0)
		return (-value);
	return (value);
}
