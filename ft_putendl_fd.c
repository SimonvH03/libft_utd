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
 * @brief Writes a string to a file descriptor, followed by a newline.
 *
 * This function writes the string @p s to the file descriptor @p fd,
 * 	followed by a newline character.
 *
 * @param s The string to write.
 * @param fd The file descriptor to write to.
 * @return The number of bytes written,
 * 	or -1 if an error occurs.
 */
int	ft_putendl_fd(char *s, int fd)
{
	return (ft_putstr_fd(s, fd) + ft_putchar_fd('\n', fd));
}
