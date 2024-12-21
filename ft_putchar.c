/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:55:28 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a character to standard output.
 *
 * This function writes the character @p c to standard output.
 *
 * @param c The character to write.
 * @return The number of bytes written, or -1 if an error occurs.
 */
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
