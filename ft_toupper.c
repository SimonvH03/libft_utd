/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:33:48 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/27 19:28:15 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a lowercase letter to uppercase.
 *
 * This function converts the lowercase letter @p c to uppercase.
 *
 * @param c The letter to convert to uppercase.
 * @return The uppercase representation of the letter.
 */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
