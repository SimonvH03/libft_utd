/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:23:17 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/02 20:38:32 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is a 7-bit US-ASCII character.
 *
 * This function checks if the character @p c is a 7-bit US-ASCII character.
 *
 * @param c The character to check.
 * @return A non-zero value if the character is a 7-bit US-ASCII character,
 * 	or 0 otherwise.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
