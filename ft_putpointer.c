/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:15:27 by simon             #+#    #+#             */
/*   Updated: 2024/03/19 18:27:05 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a pointer to standard output.
 *
 * This function writes the pointer @p p to standard output in hexadecimal format.
 *
 * @param p The pointer to write.
 * @return The number of characters written.
 */
int	ft_putpointer(unsigned long p)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_putnbr_base(p, "0123456789abcdef");
	return (len);
}
