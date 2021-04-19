#include <unistd.h>
#include <stdio.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a' \
				&& base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		z = i + 1;
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
    printf("%d\n", i);
	return (i);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		base_type;
	int		n[16];

	i = 0;
	if ((base_type = ft_check_base(base)))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (nbr)
		{
			n[i] = nbr % base_type;
			nbr /= base_type;
			i++;
		}
		while (i > 0)
        {
			ft_putchar(base[n[--i]]);
        }
	}
	
}

int main()
{
    int num = 56789;
    char base[17] = "0123456789ABCDEF";
    ft_putnbr_base(num, base);
    return (0);
}