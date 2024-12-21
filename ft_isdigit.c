/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:21:29 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/30 22:10:41 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is a digit.
 *
 * This function checks if the character @p c is a digit.
 *
 * @param c The character to check.
 * @return A non-zero value if the character is a digit, or 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1 << 11);
	else
		return (0);
}
