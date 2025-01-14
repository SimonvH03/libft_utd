/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:21:57 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/07/04 18:34:26 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees the memory of a single element of a linked list.
 *
 * This function deletes and frees the memory of the element @p lst,
 * 	using the function @p del to free the content of the element.
 *
 * @param lst The element to delete and free.
 * @param del The function used to free the content of the element.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
