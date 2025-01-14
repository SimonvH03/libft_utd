/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:51:27 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurrence of a character in a string.
 *
 * This function locates the last occurrence of the character @p c
 * 	in the string @p str.
 * The null-terminator is considered part of the string.
 *
 * @param str The string to search in.
 * @param c The character to search for.
 * @return A pointer to the last occurrence of the character,
 * 	or NULL if the character is not found.
 */
char	*ft_strrchr(const char *str, int c)
{
	int		len;

	len = ft_strlen(str);
	while (len + 1)
	{
		if (str[len] == (char)c)
			return ((char *)(str + len));
		len--;
	}
	return (NULL);
}
