/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:45:39 by alnour            #+#    #+#             */
/*   Updated: 2026/10/18 13:23:29 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calc_len(unsigned int local_n)
{
	if (local_n < 10)
		return (1);
	return (calc_len(local_n / 10) + 1);
}

char	*tr_int(unsigned int local_n, char *value, int *i)
{
	if (local_n >= 10)
		tr_int(local_n / 10, value, i);
	value[*i] = (local_n % 10) + '0';
	(*i)++;
	return (value);
}

char	*ft_itoa(int n)
{
	char			*value;
	unsigned int	len;
	int				i;
	unsigned int	local_n;

	i = 0;
	if (n < 0)
		local_n = (unsigned int)(-n);
	else
		local_n = (unsigned int)n;
	len = calc_len(local_n);
	if (n < 0)
		len++;
	value = malloc(sizeof(char) * (len + 1));
	if (!value)
		return (NULL);
	if (n < 0)
	{
		value[0] = '-';
		i++;
	}
	tr_int(local_n, value, &i);
	value[len] = '\0';
	return (value);
}
