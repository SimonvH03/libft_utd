/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_ints.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:47:44 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 17:38:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Swaps two integers.
 *
 * This function swaps the values of the integers pointed to by @p a and @p b.
 *
 * @param a The first integer to swap.
 * @param b The second integer to swap.
 */
void	ft_swap_ints(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
