#include<unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power==0 || nb==1)
		return (1);
	if (power<0 || nb==0)
		return (0);
	if (power>=31)
		return(-1);
	return (nb*ft_recursive_power(nb, power-1));
}

int		main()
{
	ft_recursive_power(3,0);
	ft_recursive_power(3,2);
	return (0);
}
