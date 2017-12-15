#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar(int c);

int     main(void)
{
    ft_putnbr(12);
    ft_putchar('\n');
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(-1);
    ft_putchar('\n');
    ft_putnbr(2147483647);
    ft_putchar('\n');
    ft_putnbr(-2147483648);
    ft_putchar('\n');
}
