#include <unistd.h>
#include <stdio.h>

/* print f pour le moment, mais je compte faire cette fonction avec seulement un ft putchar pour l'entrainement*/

void ft_putchar(int c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	unsigned int nbi;

	nbi=nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbi=-nb;
	}
	if (nbi >= 10)
	{
		ft_putnbr(nbi/10);
		ft_putnbr(nbi%10);
	}
	else
		ft_putchar(nbi+48);
}

int ft_somme9(int u)
{
	int i;

	i=0;
	while (u > 0)
	{
		i+=u%10;
		u=u/10;
	}
	if (i == 9)
		return(1);
	return(0);
}

void aff_anno(int nb, char* titre, int ltitre, int date)
{
	ft_putnbr(nb);
	write(1, titre, ltitre);
	write(1, " est sortie en ", 15);
	ft_putnbr(date);
	ft_putchar('\n');
}

/*tableau pas a la norme*/

void aff_jeux(int nb)
{
	int date[6] = {1998, 2003, 2006, 2009, 2011, 2015};
	char* titre[6] = {" - A la Conquête d'un Nouveau Monde", " - Le Nouveau Monde", "", "", "", ""};
	if (nb == 1602)
		aff_anno(nb, titre[0], 36, date[0]);
	else if (nb == 1503)
		aff_anno(nb, titre[1], 19, date[1]);
	else if (nb == 1701)
		aff_anno(nb, titre[2], 0, date[2]);
	else if (nb == 1404)
		aff_anno(nb, titre[3], 0, date[3]);
	else if (nb == 2070)
		aff_anno(nb, titre[4], 0, date[4]);
	else if (nb == 2205)
		aff_anno(nb, titre[5], 0, date[5]);
	else
	{
		ft_putnbr(nb);
		write(1, " n'existe pas\n", 14);
	}
}

void ft_game(int nb)
{
	if (nb < 0 || nb > 2500)
	{
		ft_putnbr(nb);
		write(1, " est trop loin dans le couloir du temps\n", 40);
	}
	else
	{
		if (ft_somme9(nb) == 1)
		{
			write(1, "Anno ", 5);
			aff_jeux(nb);
		}
		else
		{
			ft_putnbr(nb);
			write(1, " est un nombre dont la somme de ses chiffres ne fait 9\n", 55);
		}
	}
}

void main(void)
{
	ft_game(-14);
	ft_game(18);
	ft_game(1404);
	ft_game(1503);
	ft_game(1602);
	ft_game(2070);
	ft_game(1701);
	ft_game(9);
	ft_game(0);
	ft_game(2500);
	ft_game(2501);
	ft_game(-2147483648);
	ft_game(2147483647);
}
