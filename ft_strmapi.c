/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:38:20 by alnour            #+#    #+#             */
/*   Updated: 2026/10/17 17:38:20 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*value;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	value = malloc(sizeof(char) * (len + 1));
	if (!value)
		return (NULL);
	while (s[i] != '\0')
	{
		value[i] = f((unsigned int)i, s[i]);
		i++;
	}
	value[i] = '\0';
	return (value);
}
