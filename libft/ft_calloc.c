/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:03:50 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 15:43:46 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	totalsize;
	char	*ptr;

	i = 0;
	if (nmemb != 0 && size > __SIZE_MAX__ / nmemb)
		return (0);
	totalsize = nmemb * size;
	ptr = (char *)malloc(totalsize);
	if (ptr == 0)
		return (0);
	while (i < totalsize)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

//#include <limits.h>
//#include <fcntl.h>
//#include <stdio.h>
//#include <string.h>
//#include <strings.h>
//#include <bsd/string.h>
//int	main(void)
//{
//	size_t	nmemb = 0;
//	size_t	size = 0;
//	size_t	i;
//	//size_t	argv_nmemb;
//	//size_t	argv_size;
//	//char	*argv_real;
//	//char	*argv_mine;
//	char	*real;
//	char	*mine;
//
//	////ERROR CHECK
//	//if (argc < 3)
//	//{
//	//	printf("\e[1;31;7m ERROR! \e[0m"
//	//		"\e[1;7m Need 2x ARGV to work with! \e[0m\n"
//	//		"\e[1;7m |1. nmemb| \n |2. size| \e[0m\n");
//	//	return (0);
//	//}
//	//argv_nmemb = (size_t)ft_atoi(argv[1]);
//	//argv_size = (size_t)ft_atoi(argv[2]);
//	//argv_real = calloc(argv_nmemb, argv_size);
//	//argv_mine = ft_calloc(argv_nmemb, argv_size);
//	real = calloc(nmemb, size);
//	mine = ft_calloc(nmemb, size);
//	if (real == 0 || mine == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		if (real)
//			free(real);
//		if (mine)
//			free(mine);
//		return (0);
//	}
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_calloc.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
////	//TEST 1: USING ARGV
////	printf("Test 1: Using ARGV\n");
////	printf("|nmemb = %s| |size = %s|\n\n", argv[1], argv[2]);
////	printf("Original:\n");
////	i = 0;
////	while (i < argv_nmemb * argv_size)
////	{
////		if (argv_real[i] == 0)
////			printf("\e[92m0\e[0m");
////		else
////			printf("%c", argv_real[i]);
////		i++;
////	}
////	printf("\n\n");
////
////	printf("My result:\n");
////	i = 0;
////	while (i < argv_nmemb * argv_size)
////	{
////		if (argv_mine[i] == 0)
////			printf("\e[34m0\e[0m");
////		else
////			printf("%c", argv_mine[i]);
////		i++;
////	}
////	printf("\n\n--------------------------------------------\n\n");
////	free(argv_real);
////	free(argv_mine);
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("|nmemb = %zu| |size = %zu|\n\n", nmemb, size);
//	printf("Original:\n");
//	i = 0;
//	while (i < nmemb * size)
//	{
//		if (real[i] == 0)
//			printf("\e[92m0\e[0m");
//		else
//			printf("%c", real[i]);
//		i++;
//	}
//	printf("\n\n");
//
//	printf("My result:\n");
//	i = 0;
//	while (i < nmemb * size)
//	{
//		if (mine[i] == 0)
//			printf("\e[34m0\e[0m");
//		else
//			printf("%c", mine[i]);
//		i++;
//	}
//	printf("\n");
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE!
//	printf("\e[1;7m Job done! \e[0m\n");
//	free(real);
//	free(mine);
//	return (0);
//}
