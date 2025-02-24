/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_ptr.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-hoo <svan-hoo@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 20:49:58 by svan-hoo      #+#    #+#                 */
/*   Updated: 2025/02/24 04:18:24 by simon         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/**
 * @brief Writes an integer to a string.
 *
 * This function writes the integer @p n to the string pointed to by @p ptr.
 * The string must have enough space to store the integer and null-terminator.
 *
 * @param ptr The string to write to.
 * @param n The integer to write.
 */
void	ft_putnbr_ptr(char *ptr, int n)
{
	size_t	len;

	len = ft_intlen(n);
	if (n == INT_MIN)
	{
		ft_strlcpy(ptr, "-2147483648", 13);
		return ;
	}
	if (n < 0)
	{
		*ptr = '-';
		n = -n;
	}
	else
		*ptr = '0';
	ptr[len] = '\0';
	while (n != 0)
	{
		ptr[--len] = (n % 10) + 48;
		n /= 10;
	}
}
