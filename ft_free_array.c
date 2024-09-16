/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 22:37:08 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/09/15 22:37:15 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// free all pointers in array, then array itself. Array must be NULL-terminated
void
	ft_free_array(
		void **array)
{
	int	i;

	i = 0;
	if (array)
		while (array[i] != NULL)
			free(array[i++]);
	free(array);
}
