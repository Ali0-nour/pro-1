/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 23:49:30 by alnour            #+#    #+#             */
/*   Updated: 2026/10/22 00:11:32 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
  t_list  *value;

  if (!lst || !f || !del)
    return (NULL);
  while (lst != NULL)
  {
    ft_lstiter(lst);
    ft_lstclear(lst);
  }
}
