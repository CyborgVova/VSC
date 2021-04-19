#include <stdio.h>

int	ft_atoi(char *str)
{
	int minus;
	int ret;
	int i;

	i = 0;
	ret = 0;
	minus = 0;
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	if (minus % 2)
		ret *= -1;
	return (ret);
}

int main(int argc, char **argv)
{
    int num;
    if (argc == 2)
    	num = ft_atoi(argv[1]);
        printf("%d", num);
        return (0);
}