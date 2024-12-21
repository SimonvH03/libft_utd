/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:31:20 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/02 20:38:29 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is an alphabetic character.
 *
 * This function checks if the character @p c is an uppercase or lowercase letter.
 *
 * @param c The character to check.
 * @return A non-zero value if the character is an alphabetic character, or 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1 << 10);
	else
		return (0);
}
