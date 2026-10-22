/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:26:56 by alnour            #+#    #+#             */
/*   Updated: 2026/10/16 19:40:24 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	save;
	int	i;

	i = 0;
	save = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			save = i;
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	if (save != -1)
		return ((char *)&s[save]);
	return (NULL);
}
