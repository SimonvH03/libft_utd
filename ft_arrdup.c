/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 20:50:39 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/09/16 17:00:23 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates an array of strings.
 *
 * This function takes a null-terminated array of strings and creates a
 * duplicate of it. Each string in the array is duplicated, and the new
 * array is also null-terminated.
 *
 * @param arr The null-terminated array of strings to duplicate.
 * @return A pointer to the newly allocated array of strings, or NULL if
 *         memory allocation fails.
 */
char	**ft_arrdup(char **arr)
{
	char	**dup;
	int		i;

	i = 0;
	while (arr[i])
		++i;
	dup = (char **)malloc((i + 1) * sizeof(char *));
	if (dup == NULL)
		return (NULL);
	dup[i] = NULL;
	while (i--)
	{
		dup[i] = ft_strdup(arr[i]);
		if (!dup[i])
			return (ft_free_array((void **)dup), NULL);
	}
	return (dup);
}
