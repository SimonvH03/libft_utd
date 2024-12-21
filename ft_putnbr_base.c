/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:49:58 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the number 'n' in the specified 'base'.
 *
 * This function takes an unsigned long integer 'n' and a string 'base' 
 * representing the base in which to print the number. It outputs the 
 * number in the given base.
 *
 * @param n The number to be printed.
 * @param base The base in which to print the number. It should be a 
 *             null-terminated string containing unique characters.
 *             The length of the base string determines the base (e.g., 
 *             "01" for binary, "0123456789" for decimal, "0123456789ABCDEF" 
 *             for hexadecimal).
 *
 * @return The number of characters printed.
 */
int	ft_putnbr_base(unsigned long n, char *base)
{
	int					len;
	const unsigned int	size = ft_strlen(base);

	len = 0;
	if (n >= size)
		len += ft_putnbr_base(n / size, base);
	len += ft_putchar(base[n % size]);
	return (len);
}
