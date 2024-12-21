/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_in_circle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:27:07 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/09/16 17:01:19 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a point is inside a circle.
 *
 * This function checks if the point with coordinates @p x_minus_a and @p y_minus_b
 * is inside the circle with radius @p radius and center at (a, b).
 *
 * @param x_minus_a The x-coordinate of the point minus the x-coordinate of the center.
 * @param y_minus_b The y-coordinate of the point minus the y-coordinate of the center.
 * @param radius The radius of the circle.
 * @return true if the point is inside the circle, false otherwise.
 */
short
	is_in_circle(
		float x_minus_a,
		float y_minus_b,
		float radius)
{
	float	square_distance;

	square_distance = (x_minus_a) * (x_minus_a) + (y_minus_b) * (y_minus_b);
	if (radius * radius > square_distance)
		return (true);
	return (false);
}
