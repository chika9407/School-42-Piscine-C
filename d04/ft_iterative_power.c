#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int result;

	if (power<0 || nb ==0)
		return (0);
	if (power==0 || nb ==1)
		return (1);
	result = 1;
	while (power>0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

int		main()
{
	ft_iterative_power(3,0);
	ft_iterative_power(3,2);
	return (0);
}
