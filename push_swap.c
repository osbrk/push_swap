/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:11:07 by osukhore          #+#    #+#             */
/*   Updated: 2026/02/24 15:31:12 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	return (0);
}

int	ft_num_check(const char *str)
{
	int	i;

	i = 0;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		return(printf("Error\n"));
	while (i < argc)
	{
		if (ft_num_check(argv[i]) == 1)
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
