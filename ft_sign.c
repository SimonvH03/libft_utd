/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:32:41 by simon             #+#    #+#             */
/*   Updated: 2024/03/23 23:33:31 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short
	ft_sign(
		double value)
{
	if (value < 0)
		return (-1);
	if (value > 0)
		return (1);
	return (0);
}
