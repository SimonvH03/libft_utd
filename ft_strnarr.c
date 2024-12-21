/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnarr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 22:03:34 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/06/27 22:10:43 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Searches an array of strings for a string.
 *
 * This function searches the array of strings @p haystack for the string @p needle.
 * The search is limited to the first @p n elements of the array.
 *
 * @param haystack The array of strings to search.
 * @param needle The string to search for.
 * @param n The number of elements to search.
 * @return A pointer to the first matching string, or NULL if no match is found.
 */
char	*ft_strnarr(char **haystack, char *needle, size_t n)
{
	const size_t	needle_len = ft_strlen(needle);

	while (*haystack && n)
	{
		if (ft_strnstr(*haystack, needle, needle_len))
			return (*haystack);
	}
	return (NULL);
}
