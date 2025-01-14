/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:29:34 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/01 21:46:13 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is a printable character.
 *
 * This function checks if the character @p c is a printable character.
 *
 * @param c The character to check.
 * @return A non-zero value if the character is a printable character,
 * 	or 0 otherwise.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1 << 14);
	else
		return (0);
}
