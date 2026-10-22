/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:52:10 by alnour            #+#    #+#             */
/*   Updated: 2026/10/21 17:43:19 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*save;

	if (lst == NULL || new == NULL)
		return ;
	save = *lst;
	*lst = new;
	new->next = save;
}
