#include<unistd.h>

int	ft_sqrt(int nb)
{
	int i;

	if(nb<=0)
		return (0);
	if(nb==1)
		return (1);
	i=0;
	while (i<= 4634 && i<=nb/2)
	{
		if (i*i==nb)
			return (i);
		i++;
	}
	return (0);}
int		main()
{
	ft_sqrt(4);
	ft_sqrt(0);
	ft_sqrt(1);
	ft_sqrt(9);
	return (0);
}
