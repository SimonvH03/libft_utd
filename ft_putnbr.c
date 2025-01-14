/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:49:58 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes an integer to standard output.
 *
 * This function writes the integer @p n to standard output.
 * The function accounts for the sign of the integer,
 * 	and writes the integer to standard output.
 *
 * @param n The integer to write.
 * @return The number of characters written.
 */
int	ft_putnbr(long n)
{
	int	len;

	len = 0;
	if (n == INT_MIN)
	{
		return (ft_putstr("-2147483648"));
	}
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		len += ft_putnbr(n / 10);
	n = n % 10;
	len += ft_putchar(n + 48);
	return (len);
}
