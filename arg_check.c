/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:35:04 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/04 10:55:18 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

///// OLD BELOW
//int	ft_isdigit(int c)
//{
//	if (c >= 48 && c <= 57)
//		return (2048);
//	return (0);
//}
//
//int	ft_num_check(const char *str)
//{
//	int	i;
//
//	i = 0;
//	if (str[i] == 43 || str[i] == 45)
//		i++;
//	while (str[i])
//	{
//		if (ft_isdigit(str[i]) == 0)
//			return (0);
//		i++;
//	}
//	return (1);
//}


// What do we want to do here?
// 1. FT_SPLIT using the ' ' [space]
// 2. Check each resulting string if: isdigit, atoi accepts +/-, isdup
// 3. Errors to be printed in separate function.c
// 4. How to take input in number and string form?