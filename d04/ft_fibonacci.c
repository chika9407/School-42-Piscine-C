#include<unistd.h>

int	ft_fibonacci(int index)
{
	if (index==0)
		return (0);
	if (index==1)
		return (1);
	if (index<0)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index-2));
}

int		main()
{
	ft_fibonacci(0);
	ft_fibonacci(1);
	ft_fibonacci(-1);
	ft_fibonacci(3);
	return (0);
}
