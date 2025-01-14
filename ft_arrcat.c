/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 21:31:21 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/08/09 16:33:39 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends a string to an array of strings.
 *
 * This function takes an array of strings and a string to append to it. The
 * new string is added to the end of the array, and the array is null-terminated.
 *
 * @param array The array of strings to append to.
 * @param add The string to append to the array.
 * @return A pointer to the newly allocated array of strings, or NULL if
 *         memory allocation fails.
 */
char	**ft_arrcat(char **array, char *add)
{
	char	**new;
	size_t	size;

	size = 0;
	while (array && array[size])
		++size;
	new = (char **)malloc(sizeof(char *) * (size + 1 + 1));
	if (new == NULL)
		return (NULL);
	new[size] = add;
	new[size + 1] = NULL;
	while (size--)
		new[size] = array[size];
	free(array);
	return (new);
}
