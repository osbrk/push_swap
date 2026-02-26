/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:11:07 by osukhore          #+#    #+#             */
/*   Updated: 2026/02/26 12:30:19 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

//static int	count_nbr(char *argv)
//{
//	int		count;
//
//	count = 0;
//	while (argv[count])
//		count++;
//	return (count);
//}

// NUMBER CHECK

static int	check_dup(char **argv)
{
	int		i;
	int		j;
	int		k;
	int		count;

	i = 1;
	while (argv[i])
	{
		count = ft_strlen(argv[i]);
		while (j < count)
		{
			k = j + 1;
			while (j < count)
			{
				if (ft_atol(argv[j]) == ft_atol(argv[k]))
					return (1);
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
int	check_nbr(const char *nbr)
{
	int	i;
	long tmp_nbr;

	i = 0;
	while (nbr[i])
	{
		tmp_nbr = ft_atol(nbr[i]);
		if ((nbr[i] == 43 || nbr[i] == 45) && !ft_isdigit(nbr[i + 1]))
			return (1);
		else if (!ft_isdigit(nbr) && (nbr[i] != 43 || nbr[i] != 45))
			return (1);
		else if (tmp_nbr < INT_MIN || tmp_nbr > INT_MAX)
			return (1);
		i++;
	}
	return (0);
}
// ERROR MANAGEMENT

void	free_forward(char **to_free)
{
	int	i;

	i = -1;
	while (to_free[++i])
		free(to_free[i]);
	free(to_free);
}

void	error_message(char **to_free)
{
	free_forward(to_free);
	ft_putendl_fd("Error", 2);
}


// CHECK FOR MIX OF STRING AND DIGITS
int	check_error(char **argv)
{
	int		count;
	char	tmp_str;
	char	**tmp_argv;

	count = 1;
	while (argv[count++])
		tmp_str = ft_strjoin_with_space(tmp_str, argv[count]);
	tmp_argv = ft_split(tmp_str, ' ');
	if (tmp_str)
		free(tmp_str);
	count = 0;
	while (tmp_argv[count++])
	{
		if (check_dup(tmp_argv) || check_nbr(tmp_argv[count]))
			error_message(tmp_argv);
	}
	if (tmp_argv)
		free_forward(tmp_argv);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		return(0);
	while (i < argc)
	{
		if (ft_atoi(argv[i]))
			i++;
		else
			return(printf("Error\n"));
	}
	i = 1;
	while (i < argc)
	{
		printf("%s", argv[i]);
		i++;
		if (argv[i])
			printf(" ");
	}
	return(0);
}
