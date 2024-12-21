/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:21:57 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/07/04 18:32:42 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees the memory of a linked list.
 *
 * This function deletes and frees the memory of the linked list @p lst, using the
 * function @p del to free the content of each element. Finally, the pointer to the
 * linked list is set to NULL.
 *
 * @param lst The address of a pointer to the first element of the linked list.
 * @param del The function used to free the content of each element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
