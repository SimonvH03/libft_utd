/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstfree.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-hoo <svan-hoo@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 17:21:57 by svan-hoo      #+#    #+#                 */
/*   Updated: 2025/04/05 15:23:36 by simon         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief frees the memory of a linked list, not touching the content.
 *
 * This function frees the memory of the linked list @p lst
 * Finally, the pointer to the linked list is set to NULL.
 *
 * @param lst The address of a pointer to the first element of the linked list.
 */
void	ft_lstfree(t_list **lst)
{
	t_list	*next;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		free(*lst);
		*lst = next;
	}
}
