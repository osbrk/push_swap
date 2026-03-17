/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:35:04 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/17 12:42:55 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// NUMBER CHECK
static int	check_dup(char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atol(argv[i]) == ft_atol(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	check_nbr(const char *nbr)
{
	int		i;
	long	tmp_nbr;

	i = 0;
	tmp_nbr = ft_atol(nbr);
	if (tmp_nbr < INT_MIN || tmp_nbr > INT_MAX)
			return (1);
	while (nbr[i])
	{
		if ((nbr[i] == 43 || nbr[i] == 45) && ft_isdigit(nbr[i + 1]) == 0)
			return (1);
		else if (ft_isdigit(nbr[i + 1]) != 0)
			i++;
		if (ft_isdigit(nbr[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

// CHECK FOR MIX OF STRING AND DIGITS
char	**check_error(char **argv)
{
	int		count;
	char	*tmp_str;
	char	**tmp_argv;

	count = 1;
	if (argv[count])
		tmp_str = ft_strdup(argv[count]);
	while (argv[++count])
		tmp_str = ft_strjoin_with_space(tmp_str, argv[count]);
	tmp_argv = ft_split(tmp_str, ' ');
	count = -1;
	while (tmp_argv[++count])
	{
		if (check_dup(tmp_argv) || check_nbr(tmp_argv[count]))
		{
			if (tmp_str)
				free (tmp_str);
			error_message(tmp_argv);
		}
	}
	if (tmp_str)
		free (tmp_str);
	return (tmp_argv);
}
