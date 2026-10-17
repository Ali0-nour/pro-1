/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:08:33 by alnour            #+#    #+#             */
/*   Updated: 2026/10/16 19:18:14 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*local_src;
	unsigned char		*local_dest;
	size_t				i;

	if (!dest && !src)
		return (dest);
	local_dest = (unsigned char *)dest;
	local_src = (const unsigned char *)src;
	if (local_dest > local_src)
	{
		i = n;
		while (i--)
			local_dest[i] = local_src[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			local_dest[i] = local_src[i];
			i++;
		}
	}
	return (dest);
}
