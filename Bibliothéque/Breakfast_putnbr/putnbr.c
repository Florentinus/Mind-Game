#include <unistd.h>

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
