/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:45:31 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/27 19:28:12 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts an uppercase letter to lowercase.
 *
 * This function converts the uppercase letter @p c to lowercase.
 *
 * @param c The letter to convert to lowercase.
 * @return The lowercase representation of the letter.
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
