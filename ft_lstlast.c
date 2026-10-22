/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:31:29 by alnour            #+#    #+#             */
/*   Updated: 2026/10/21 18:42:13 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*save;

	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		save = lst;
		lst = lst->next;
	}
	return (save);
}
