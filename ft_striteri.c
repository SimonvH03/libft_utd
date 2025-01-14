/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:38:19 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 18:23:47 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of a string.
 *
 * This function applies the function @p func
 * 	to each character of the string @p str,
 * passing the index of the character as the first argument to the function.
 *
 * @param str The string to iterate over.
 * @param func The function to apply to each character.
 */
void	ft_striteri(char *str, void (*func)(size_t, char*))
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		func(i, (str + i));
		i++;
	}
	return ;
}
