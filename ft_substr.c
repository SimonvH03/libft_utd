/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:39:03 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory for a substring of a string.
 *
 * This function allocates memory for a substring of the string @p s,
 * 	starting at the index @p start and containing at most @p len characters.
 * The substring is null-terminated.
 *
 * @param s The string to create a substring from.
 * @param start The index of the first character of the substring.
 * @param len The maximum number of characters in the substring.
 * @return A pointer to the newly allocated substring,
 * 	or NULL if memory allocation fails.
 */
char	*ft_substr(const char *s, size_t start, size_t len)
{
	size_t		i;
	size_t		slen;
	char		*sub;

	i = 0;
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	while (s[i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
