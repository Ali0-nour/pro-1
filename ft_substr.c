/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 20:54:58 by alnour            #+#    #+#             */
/*   Updated: 2026/10/16 20:59:05 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*value;
	size_t	i;
	size_t	local_len;

	i = 0;
	if (!s)
		return (NULL);
	local_len = ft_strlen(s);
	if (start > local_len)
		return (ft_strdup(""));
	if ((local_len - start) < len)
		value = malloc((sizeof(char) * (local_len - start)) + 1);
	else
		value = malloc(sizeof(char) * (len + 1));
	if (!value)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		value[i] = s[start + i];
		i++;
	}
	value[i] = '\0';
	return (value);
}
