/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 22:21:23 by alnour            #+#    #+#             */
/*   Updated: 2026/10/21 23:28:37 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*save;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		save = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = save;
	}
	*lst = NULL;
}
