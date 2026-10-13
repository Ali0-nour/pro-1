int	ft_atoi(const char *str)
{
	int	i;
	int	fl;
	int		value;

	value = 0;
	fl = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			fl = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			value = (value * 10) + (str[i] - '0');
			i++;
	}
	return (value * fl);
}
