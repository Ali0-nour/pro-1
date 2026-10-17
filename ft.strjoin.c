/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:41:49 by alnour            #+#    #+#             */
/*   Updated: 2026/10/17 16:55:45 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*value;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	value = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!value)
		return (NULL);
	while (s1[i] != '\0')
	{
		value[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		value[i] = s2[j];
		j++;
		i++;
	}
	value[i] = '\0';
	return (value);
}
