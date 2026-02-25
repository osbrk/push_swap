/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:30:12 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:02:08 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == 0)
		return ;
	while (s[i] != '\0')
		write (fd, &s[i++], 1);
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
//	char	str[] = "Never gonna give you up, never gonna let you down";
//	char	filename[] = "RESULT_putstr.txt";
//	char	*argv_str = argv[1];
//
//	//ERROR CHECK
//	if (argc < 2)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String| \e[0m\n");
//		return (0);
//	}
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_putstr_fd.c \e[0m\n\n");
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
//	printf("Contents:\t|%s|\n\n", argv_str);
//	printf("My result:\t");
//	ft_putstr_fd(argv_str, fd);
//	printf("\e[34mCreated file: |%s|\e[0m\n\n", filename);
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("%s\n|fd = 1|\n\n", str);
//	printf("My result:\e[34m\n");
//	ft_putendl_fd(str, 1);
//	printf("\e[0m\n");
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE!
//	printf("\e[1;7m Job done! \e[0m\n");
//	close(fd);
//	return (0);
//}
