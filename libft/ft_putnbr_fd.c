/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:12:33 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/05 10:30:29 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lencontrol(const unsigned int nbr, size_t i)
{
	unsigned int	n;

	n = nbr;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	int				sign;
	unsigned int	nbr;
	size_t			len;
	size_t			i;
	char			str[20];

	i = 0;
	sign = 1 - 2 * (n < 0);
	nbr = (unsigned int)(n * sign);
	len = ft_lencontrol(nbr, 0) + (sign < 0);
	if (sign < 0)
		str[i++] = '-';
	str[len] = '\0';
	while (i < len)
	{
		str[len - 1] = (nbr % 10) + '0';
		len--;
		nbr /= 10;
	}
	ft_putstr_fd(str, fd);
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
//	int		fd;
//	int		argv_n;
//	int		n;
//	char	filename[] = "RESULT_putnbr.txt";
//
//	//ERROR CHECK
//	if (argc < 2)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. Int| \e[0m\n");
//		return (0);
//	}
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_putnbr_fd.c \e[0m\n\n");
//
//	//SHOW ORIGINAL INPUT
//	argv_n = ft_atoi(argv[1]);
//	printf("--------------------------------------------\n\n");
//
//	//RUN FUNCTIONS
//	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0740);
//	if (fd < 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m fd bugged! (%d) \e[0m\n", fd);
//		return (1);
//	}
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Create file using ARGV\n");
//	printf("File name:\t|%s|\n", filename);
//	printf("Contents:\t|%d|\n\n", argv_n);
//	printf("My result:\t");
//	ft_putnbr_fd(argv_n, fd);
//	printf("\e[34mCreated file: |%s|\e[0m\n\n", filename);
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple tests\n");
//	printf("|fd = 1|\n\n");
//
//	//POSITIVE
//	n = 42;
//	printf("My result:\t|%d|\e[34m\n", n);
//	ft_putnbr_fd(n, 1);
//	printf("\e[0m\n");
//
//	//NEGATIVE
//	n = -42;
//	printf("My result:\t|%d|\e[34m\n", n);
//	ft_putnbr_fd(n, 1);
//	printf("\e[0m\n");
//
//	//ZERO
//	n = 0;
//	printf("My result:\t|%d|\e[34m\n", n);
//	ft_putnbr_fd(n, 1);
//	printf("\e[0m\n");
//
//	//INT MAX
//	n = INT_MAX;
//	printf("My result:\t|%d|\e[34m\n", n);
//	ft_putnbr_fd(n, 1);
//	printf("\e[0m\n");
//
//	//INT MIN
//	n = INT_MIN;
//	printf("My result:\t|%d|\e[34m\n", n);
//	ft_putnbr_fd(n, 1);
//	printf("\e[0m\n");
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE!
//	printf("\e[1;7m Job done! \e[0m\n");
//	close(fd);
//	return (0);
//}
