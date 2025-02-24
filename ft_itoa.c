/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-hoo <svan-hoo@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 17:38:33 by svan-hoo      #+#    #+#                 */
/*   Updated: 2025/02/24 02:00:33 by simon         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an integer to a string.
 *
 * This function converts the integer @p n to a string representation.
 * The string is allocated with malloc(3),
 * 	and must be freed with free(3) when it is no longer needed.
 *
 * @param n The integer to convert to a string.
 * @return The string representation of the integer,
 * 	or NULL if memory allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	nlen;

	nlen = ft_intlen(n);
	ptr = (char *)malloc((nlen + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_putnbr_ptr(ptr, n);
	return (ptr);
}
