/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:38:54 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory for a copy of a string without leading or trailing characters.
 *
 * This function allocates memory for a copy of the string @p s1, without the leading
 * and trailing characters that are in the set @p set. The function returns the copy
 * of the string, or NULL if memory allocation fails.
 *
 * @param s1 The string to copy.
 * @param set The set of characters to remove from the string.
 * @return A copy of the string without leading or trailing characters.
 */
char	*ft_strtrim(const char *s1, const char *set)
{
	size_t		i;
	size_t		s1len;
	char		*trim;
	const char	*s1start;

	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	s1start = s1 + i;
	s1len = ft_strlen(s1start);
	i = 0;
	while (ft_strchr(set, s1start[s1len - 1 - i]) && s1len > i)
		i++;
	trim = (char *)malloc((s1len - i + 1) * sizeof(char));
	if (trim == NULL)
		return (NULL);
	ft_strlcpy(trim, s1start, (s1len - i + 1));
	return (trim);
}
