/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:20:47 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/05 10:30:25 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lencontrol(const unsigned int n, size_t i)
{
	unsigned int	nbr;

	nbr = (unsigned int)n;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				sign;
	unsigned int	nbr;
	size_t			len;
	char			*str;

	sign = 1 - 2 * (n < 0);
	nbr = (unsigned int)(n * sign);
	len = ft_lencontrol(nbr, 0) + (sign < 0);
	str = (char *)malloc(len + 1);
	if (str == 0)
		return (0);
	if (sign < 0)
		str[0] = '-';
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

//#include <ctype.h>
//#include <limits.h>
//#include <fcntl.h>
//#include <stdio.h>
//#include <string.h>
//#include <strings.h>
//#include <bsd/string.h>
//int	main(int argc, char **argv)
//{
//	int		n;
//	char	*mine;
//	char	*argv_str;
//	int		argv_n;
//
//	//ERROR CHECK
//	if (argc < 2)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. Int| \e[0m\n");
//		return (0);
//	}
//	argv_str = argv[1];
//	argv_n = ft_atoi(argv_str);
//	if (argv_n == 0 && argv_str[0] != '0')
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Give me a proper number! \e[0m\n");
//		return (0);
//	}
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_itoa.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: ARGV
//	printf("Test 1: Using ARGV\n\n");
//	printf("Input ARGV\t%s\n", argv_str);
//	mine = ft_itoa(argv_n);
//	if (mine == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		return (0);
//	}
//	printf("My result:\t\e[34m%s\e[0m\n", mine);
//	free(mine);
//	printf("\n--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE VALUE
//	printf("Test 2: Simple test\n\n");
//
//	//POSITIVE
//	n = 42;
//	printf("Input +ive\t%d\n", n);
//	mine = ft_itoa(n);
//	if (mine == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		return (0);
//	}
//	printf("My result :\t\e[34m%s\e[0m\n\n", mine);
//	free(mine);
//
//	//NEGATIVE
//	n = -42;
//	printf("Input -ive\t%d\n", n);
//	mine = ft_itoa(n);
//	if (mine == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		return (0);
//	}
//	printf("My result:\t\e[34m%s\e[0m\n\n", mine);
//	free(mine);
//
//	//ZERO
//	n = 0;
//	printf("Input Zero\t%d\n", n);
//	mine = ft_itoa(n);
//	if (mine == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		return (0);
//	}
//	printf("My result:\t\e[34m%s\e[0m\n\n", mine);
//	free(mine);
//
//	//INT MAX
//	n = INT_MAX;
//	printf("Input Int Max\t%d\n", n);
//	mine = ft_itoa(n);
//	if (mine == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		return (0);
//	}
//	printf("My result: \t\e[34m%s\e[0m\n\n", mine);
//	free(mine);
//
//	//INT MIN
//	n = INT_MIN;
//	printf("Input Int Min\t%d\n", n);
//	mine = ft_itoa(n);
//	if (mine == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		return (0);
//	}
//	printf("My result: \t\e[34m%s\e[0m\n", mine);
//	free(mine);
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
