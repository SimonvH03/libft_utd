/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:48:17 by simon             #+#    #+#             */
/*   Updated: 2024/09/06 01:19:36 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a character to a file descriptor.
 *
 * This function writes the character @p c to the file descriptor @p fd.
 *
 * @param c The character to write.
 * @param fd The file descriptor to write to.
 * @return The number of bytes written, or -1 if an error occurs.
 */
int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
