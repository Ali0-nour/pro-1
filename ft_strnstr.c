/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:26:39 by alnour            #+#    #+#             */
/*   Updated: 2026/10/16 19:33:21 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *par, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (par[0] == '\0')
		return ((char *)str);
	while (i < len && str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == par[j] && (i + j) < len)
		{
			if (par[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
