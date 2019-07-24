/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerkulov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 13:53:21 by cerkulov          #+#    #+#             */
/*   Updated: 2019/07/21 23:26:50 by cerkulov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkinput(char **argv)
{
	int i;
	int j;
	int len;

	i = 1;
	while (i < 10)
	{
		len = 0;
		while (argv[i][len] != '\0')
			len++;
		j = 0;
		while (j < 9)
		{
			if ((argv[i][j] < '1' && argv[i][j] > '9') || ((argv[i][j] != '.') && len == 9))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		isvalid(char **argv, int row, int col, char c)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[row][j] != '.' && argv[row][j] == c)
				return (0);
			if (argv[i][col] != '.' && argv[i][col] == c)
				return (0);
			/*if ((argv[i][j] == row-1)/3)
				return (0)*/
			j++;
		}
		i++;
	}
	return (1);
}

int		solution(char **argv, int i, int j, char c)
{
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (argv[i][j] == '.')
			{
				while (c <= '9' && c >= '1')
				{
					if (isvalid(argv, i, j, '1') == 1)
					{
						argv[i][j] = c;
						if (solution(argv, 0, 0, '1') == 1)
							return (1);
					}
					c++;
				}
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		print_format(char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < 10)
	{
		while (j < 9)
		{
			write (1, &argv[i][j], 1);
			if (j != 8)
				write (1, " ", 1);
			j++;
		}
		j = 0;
		if (i != 9)
			write (1, "\n", 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 10)
		write (1, "Error\n", 6);
	else
		if (solution(argv, 0, 0, '1') == 1)
			print_format(argv);
		else
		   write (1, "Errorrr\n", 9);
	return (0);
}
		/*checkinput (if numbers and dots only, no special characters and input < 10)
			isvalid (number doesn't repeat itself across row, column and box/3)
		   		solution(search and replace . with number that is between 1-9 and isvalid)
					format (add spaces in between numbers and a new line) */	
