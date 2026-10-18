
#include "libft.h"

int	calc_word(char const *s, char c)
{
	int fl;
	int	i;
	int	word;

	word = 0;
	i = 0;
	fl = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && fl == 0)
		{
			word++;
			fl = 1;
		}
		else if (s[i] == c)
		{
			fl = 0;
		}
		i++;
	} 
	return (word);
}
int	calc_len(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return  (i);
		i++;
	}
	return (i);	
}
void *memory_ck(char **value,int j)
{
	int i;

	i = 0;
	while (j > i)
	{
		free(value[i]);
		i++;
	}
	free(value);
	return (NULL);
}
char **ft_split(char const *s, char c)
{
	int word;
	char **value;
	int i;
	int len;
	int j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	word = calc_word(s, c);
	value = malloc(sizeof(char *) * (word + 1));
	if (!value)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			len = calc_len(&s[i],c);
			value[j] = ft_substr(s,i,len);
			if (!value[j])
				return (memory_ck(value,j));
			i = i + len;
			j++;
		}
	}
	value[j] = NULL;
	return (value);
}
