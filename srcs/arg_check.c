/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:35:04 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/06 12:38:30 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//static int	check_alpha(char *str);
//static int	check_double(char **str);
//static int	count_nbr(char **str);
//
//int	check_error(int argc, char **argv)
//{
//	int			counter;
//	char		**tmp_argv;
//	long		tmp_nbr;
//
//	counter = 0;
//	if (argc == 2)
//		tmp_argv = ft_split(argv[1], ' ');
//	else
//		tmp_argv = argv + 1;
//	while (tmp_argv[counter])
//	{
//		tmp_nbr = ft_atol(tmp_argv[counter]);
//		if (tmp_nbr > INT_MAX || tmp_nbr < INT_MIN)
//			send_error(argc, tmp_argv);
//		if (check_double(tmp_argv))
//			send_error(argc, tmp_argv);
//		if (check_alpha(tmp_argv[counter]))
//			send_error(argc, tmp_argv);
//		counter++;
//	}
//	if (argc == 2)
//		tmp_argv = free_table_string(tmp_argv);
//	return (0);
//}
//
//static int	check_double(char **str)
//{
//	int	i;
//	int	j;
//	int	total;
//
//	total = count_nbr(str);
//	i = 0;
//	while (i < total)
//	{
//		j = i + 1;
//		while (j < total)
//		{
//			if (ft_atoi(str[i]) == ft_atoi(str[j]))
//				return (1);
//			j++;
//		}
//		i++;
//	}
//	return (0);
//}
//
//static int	count_nbr(char **str)
//{
//	int	som;
//
//	som = 0;
//	while (str[som])
//		som++;
//	return (som);
//}
//
//static int	check_alpha(char *str)
//{
//	int	i;
//
//	i = 0;
//	while (str[i])
//	{
//		if (((str[i] == '+') || (str[i] == '-')) && !ft_isdigit(str[i + 1]))
//			return (1);
//		else if ((!ft_isdigit(str[i])) && (str[i] != '+') && (str[i] != '-'))
//			return (1);
//		i++;
//	}
//	return (0);
//}
////END COPY!!!



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
	while (nbr[i])
	{
		if ((nbr[i] == 43 || nbr[i] == 45) && ft_isdigit(nbr[i + 1]) == 0)
			return (1);
		else if (ft_isdigit(nbr[i]) == 0)
			return (1);
		else if (tmp_nbr < INT_MIN || tmp_nbr > INT_MAX)
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
	tmp_str = NULL;
	if (argv[count])
		tmp_str = argv[count];
	while (argv[++count])
		tmp_str = ft_strjoin_with_space(tmp_str, argv[count]);
	tmp_argv = ft_split(tmp_str, ' ');
	if (tmp_str)
		free(tmp_str);
	count = -1;
	while (tmp_argv[++count])
	{
		if (check_dup(tmp_argv) || check_nbr(tmp_argv[count]))
		{
			error_message(tmp_argv);
			return (NULL);
		}
	}
	return (tmp_argv);
}
