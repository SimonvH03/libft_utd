/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:13:49 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates a substring in a string.
 *
 * This function locates the first occurrence of the substring @p needle
 * 	in the string @p haystack, where not more than @p n characters are searched
 * Characters that appear after a `\0' character are not searched.
 *
 * @param haystack The string to search in.
 * @param needle The substring to search for.
 * @param n The number of characters to search.
 * @return A pointer to the first occurrence of the substring,
 * 	or NULL if the substring is not found.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;

	while (*haystack && n)
	{
		i = 0;
		while (haystack[i] == needle[i] && needle[i] && n - i)
			i++;
		if (needle[i] == '\0')
			return ((char *)haystack);
		haystack++;
		n--;
	}
	if (*needle == '\0')
		return ((char *)haystack);
	return (NULL);
}
