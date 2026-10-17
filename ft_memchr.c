/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:29:52 by alnour            #+#    #+#             */
/*   Updated: 2026/10/16 19:30:41 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*local;

	local = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (local[i] == (unsigned char)c)
			return ((void *)&local[i]);
		i++;
	}
	return (NULL);
}
