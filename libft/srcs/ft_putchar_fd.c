/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:26:23 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:01:57 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
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
//	char	c = 'A';
//	char	filename[] = "RESULT_putchar.txt";
//	char	argv_c;
//
//	//ERROR CHECK
//	if (argc < 2)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. Character/String| \e[0m\n");
//		return(0);
//	}
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_putchar_fd.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//RUN FUNCTIONS
//	argv_c = argv[1][0];
//	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0740);
//	if (fd < 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7mfd bugged! (%d) \e[0m\n", fd);
//		return(1);
//	}
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Create file using ARGV\n");
//	printf("File name:\t|%s|\n", filename);
//	printf("Contents:\t|%c|\n\n", argv_c);
//	printf("My result:\e[34m\n");
//	ft_putchar_fd(argv_c, fd);
//	printf("\e[0m");
//	printf("\e[34m|%s|\e[0m\n\n", filename);
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("|%c| |fd = 1|\n\n", c);
//	printf("My result:\e[34m\n");
//	ft_putchar_fd(c, 1);
//	printf("\e[0m\n");
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE!
//	printf("\e[1;7m Job done! \e[0m\n");
//	close(fd);
//	return(0);
//}
