/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:56:24 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a string to standard output.
 *
 * This function writes the string @p str to standard output.
 *
 * @param str The string to write.
 * @return The number of bytes written, or -1 if an error occurs.
 */
int	ft_putstr(char *str)
{
	return (write(1, str, ft_strlen(str)));
}
