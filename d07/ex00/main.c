void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argc > 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	i = 1;
	return (0);
}
