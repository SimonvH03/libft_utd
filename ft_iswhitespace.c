/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:56:33 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/08/07 20:57:08 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is a whitespace character.
 *
 * This function checks if the character @p c is a whitespace character.
 *
 * @param c The character to check.
 * @return A non-zero value if the character is a whitespace character, or 0 otherwise.
 */
int	ft_iswhitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1 << 15);
	return (0);
}
