/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:21:28 by alnour            #+#    #+#             */
/*   Updated: 2026/10/16 19:23:07 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ln;
	size_t	ln_des;
	size_t	j;

	ln_des = 0;
	i = 0;
	ln = 0;
	while (src[ln] != '\0')
		ln++;
	while (ln_des < size && dst[ln_des] != '\0')
		ln_des++;
	j = ln_des;
	if (size <= ln_des)
		return (size + ln);
	while ((j < size - 1) && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ln_des + ln);
}
