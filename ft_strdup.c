/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:50:18 by alnour            #+#    #+#             */
/*   Updated: 2026/10/16 19:36:21 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*value;

	len = ft_strlen(s);
	value = malloc(sizeof(char) * (len + 1));
	if (!value)
		return (NULL);
	ft_memcpy(value, s, len + 1);
	return (value);
}
