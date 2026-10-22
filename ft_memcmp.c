/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:44:00 by alnour            #+#    #+#             */
/*   Updated: 2026/10/16 19:32:06 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*local1;
	const unsigned char	*local2;

	local1 = (const unsigned char *)s1;
	local2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (local1[i] != local2[i])
			return (local1[i] - local2[i]);
		i++;
	}
	return (0);
}
