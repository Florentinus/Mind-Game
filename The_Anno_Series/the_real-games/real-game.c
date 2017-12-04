#include <unistd.h>
#include <stdio.h>
#define couleur(param) printf("\033[%sm",param)

void aff_putchar(int c)
{
	write(1, &c, 1);
}

void aff_putnbr(int nb)
{
	unsigned int nbi;

	nbi=nb;
	if (nb < 0)
	{
		aff_putchar('-');
		nbi=-nb;
	}
	if (nbi >= 10)
	{
		aff_putnbr(nbi/10);
		aff_putnbr(nbi%10);
	}
	else
		aff_putchar(nbi+48);
}

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

int abs(int nb)
{
    if (nb < 0)
        nb=-nb;
    return(nb);
}

/*condition spéciale, juste pour le cas de 2007, il dois faire 2070, car il y
*as un 0 a la 2eme position*/

int     ft_condition_anno(int nb)
{
    int l[4];
    l[0] = abs(nb / 1000);
    l[1] = abs((nb / 100) % 10);
    l[2] = abs((nb / 10) % 10);
    l[3] = abs(nb % 10);
    if ((((l[0]+l[1] + l[3]) == 9) && (l[1] > 0)) ||
        ((l[0] + l[2]) == 9))
    {
        return(1);
    }
    return(0);
}

void 	aff_anno(int nb, char* age, int lage)
{
	if (nb == 1602 || nb == 1503 || nb == 1701 || nb == 1404 || nb == 2070 || nb == 2205 || nb == 1800)
	{
		couleur("32");
		printf("Anno %d", nb);
		couleur("0");
	}
	else
	{
		printf("Anno %d", nb);
	}
	printf(" dans la période %s\n", age);
}

void 	aff_age(int nb)
{
	char* age[5] = {"de antiquite", "médievale", "de la renaissance", "de l\'age moderne", "futur"};
	if ((nb > -1000) && (nb <= 476))
		aff_anno(nb, age[0], 12);
	if ((nb > 476) && (nb <= 1492))
		aff_anno(nb, age[1], 10);
	if ((nb > 1492) && (nb <= 1789))
		aff_anno(nb, age[2], 17);
	if ((nb > 1789) && (nb <= 2017))
		aff_anno(nb, age[3], 16);
	if (nb > 2017)
		aff_anno(nb, age[4], 5);
}

void    main(void)
{
    int nb;

    nb=-1000;
    while (nb <= 2500)
    {
        if (ft_somme9(nb) == 1)
        {
            if (ft_condition_anno(nb) == 1)
            {
				aff_age(nb);
            }
        }
        nb++;
    }
}
