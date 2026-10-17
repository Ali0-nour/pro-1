/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:41:13 by alnour            #+#    #+#             */
/*   Updated: 2026/10/16 19:08:25 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*local_dest;
	const unsigned char	*local_src;

	local_dest = (unsigned char *)dest;
	local_src = (const unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		local_dest[i] = local_src[i];
		i++;
	}
	return (dest);
}
