#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

/*éception a la regle des 25 lignes pour le nombre négatif
 *cela necessiterais une autre fonction*/

int		ft_somme9(int u)
{
	int i;

	i=0;
	if (u > 0)
	{
		while (u > 0)
		{
			i+=u%10;
			u=u/10;
		}
	}
	else
	{
		while (u < 0)
		{
			i+=u%(-10);
			u=u/10;
		}
	}
	if ((i == 9)||(i == -9))
		return(1);
	return(0);
}

int		ft_power(int nb)
{
	int p;

	p=0;
	while (nb>0)
	{
		nb/=10;
		p++;
	}
	return(p);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}
	else
	ft_putchar(nb+48);
}

void	aff_chiffres(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb=-nb;
	}
	if (ft_power(nb)==1)
	{
		ft_putchar('0');
		ft_putchar('0');
		ft_putchar('0');
		ft_putnbr(nb);
	}
	else if (ft_power(nb)==2)
	{
		ft_putchar('0');
		ft_putchar('0');
		ft_putnbr(nb);
	}
	else if (ft_power(nb)==3)
	{
		ft_putchar('0');
		ft_putnbr(nb);
	}
	else
		ft_putnbr(nb);
}

void	aff_somme(void)
{
	int nbr;
	int i;

	nbr=-1000;
	i=0;
	while (nbr <= 2500)
	{
		if (ft_somme9(nbr) == 1)
			i+=1;
		nbr++;
	}
	ft_putnbr(i);
}

void	main(void)
{
	int nbr;
	aff_somme();
	ft_putchar('\n');
	nbr=-1000;
	while(nbr <= 2500)
	{
		if (ft_somme9(nbr) == 1)
		{
			aff_chiffres(nbr);
			ft_putchar(' ');
		}
		nbr++;
	}
	ft_putchar('\n');
}
