/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:57:41 by simon             #+#    #+#             */
/*   Updated: 2024/09/06 01:20:22 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the string 's' to the standard output followed by a newline.
 *
 * @param s The string to be output.
 *
 * @return The number of characters written, including the newline character.
 */
int	ft_putendl(char *s)
{
	return (ft_putstr(s) + ft_putchar('\n'));
}
