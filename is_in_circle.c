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

/// @brief 
/// @param x_minus_a X-center minus x-coordinate of point to check
/// @param y_minus_b Y-center minus y_coordinate of point to check
/// @param radius radius of circle
/// @return true(1) if point is inside the circle, false(0) if not
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
