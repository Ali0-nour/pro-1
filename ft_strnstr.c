#include <stdio.h>

char	*ft_strnstr(const char *str, const char *par, const size_t *len)
{
	int i;
	int	par_len;
	int	start;
	int j;

	j = 0;
	start = 0;
	i = 0;
	par_len = 0;
	if (len == 0)
		return (str);
	while (par[par_len] != '\0')
		par_len++;
	while (i != len)
	{
		j = 0;
		start = i;
		while (str[i] == par[j])
		{
			j++;
			i++;
		}
		if (par[j] == '\0')
			return (str[start]);
		i++;
	}
	return (NULL);
}

int	main()
{
	char *str = "hi ali";
	char *pi = "li";
	const size_t p = 7;
	char  *s = ft_strnstr(str,pi,p);
	printf ("%d", s);
}
