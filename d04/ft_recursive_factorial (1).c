#include<unistd.h>

int	ft_recursive_factorial(int nb)
{
	int t;
	int result;

	if (nb == 0)
	       return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	return(nb*ft_recursive_factorial(nb-1));
}

int		main()
{
	ft_recursive_factorial(3);
	return (0);
}
