#include<unistd.h>

int ft_iterative_factorial(int nb)
{
	int t;

	t = nb;
	int result;

	result=1;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb ==0)
		return (1);
	while (t<=nb)
	{
		result = result * t;
		t--;
	}
	return(result);
}

int main()
{
	ft_iterative_factorial(3);
	return (0);
}
