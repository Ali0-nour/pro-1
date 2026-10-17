/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:02:10 by alnour            #+#    #+#             */
/*   Updated: 2026/10/16 19:05:36 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*local_s;
	size_t			i;

	local_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		local_s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
