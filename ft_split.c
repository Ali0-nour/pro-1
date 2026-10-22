/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splite.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnour <alnour@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 08:14:45 by alnour            #+#    #+#             */
/*   Updated: 2026/10/19 08:25:10 by alnour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_word(char const *s, char c)
{
	int	i;
	int	fl;
	int	word;

	i = 0;
	fl = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && fl == 0)
		{
			word++;
			fl = 1;
		}
		else if (s[i] == c)
			fl = 0;
		i++;
	}
	return (word);
}

static int	calc_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	*memory_ck(char **value, int j)
{
  int	i;

  i = 0;
  while (i < j)
  {
    free(value[i]);
    i++;
  }
  free(value);
  return (NULL);
}

static int	take_word(char **dst, char const *s, char c, int *i)
{
  int	len;

  while (s[*i] && s[*i] == c)
    (*i)++;
  if (s[*i] == '\0')
  {
    *dst = NULL;
    return (1);
  }
  len = calc_len(s + *i, c);
  *dst = ft_substr(s, *i, len);
  *i += len;
  if (!*dst)
    return (0);
  return (1);
}

char	**ft_split(char const *s, char c)
{
  char	**value;
  int		i;
  int		j;

  if (!s)
    return (NULL);
  value = malloc(sizeof(char *) * (calc_word(s, c) + 1));
  if (!value)
    return (NULL);
  i = 0;
  j = 0;
  while (s[i] != '\0')
  {
    if (!take_word(&value[j], s, c, &i))
      return (memory_ck(value, j));
    if (!value[j])
      break ;
    j++;
  }
  value[j] = NULL;
  return (value);
}
