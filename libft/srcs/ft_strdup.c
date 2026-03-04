/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:27:35 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:02:20 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	if (str == 0)
		return (0);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[len] = '\0';
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
//	char	str[] = "Never gonna give you up";
//	char	*argv_str  = argv[1];
//	char	*argv_real;
//	char	*argv_mine;
//	char	*real;
//	char	*mine;
//
//	//ERROR CHECK
//	if (argc < 2)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String| \e[0m\n");
//		return (0);
//	}
//	argv_real = strdup(argv_str);
//	argv_mine = ft_strdup(argv_str);
//	real = strdup(str);
//	mine = ft_strdup(str);
//	if (argv_real == 0 || argv_mine == 0 || real == 0 || mine == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		if (argv_real)
//			free(argv_real);
//		if (argv_mine)
//			free(argv_mine);
//		if (real)
//			free(real);
//		if (mine)
//			free(mine);
//		return (0);
//	}
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_strdup.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("%s\n\n", argv_str);
//	printf("Original:\n");
//	printf("\e[92m%s\e[0m\n\n", argv_real);
//
//	printf("My result:\n");
//	printf("\e[34m%s\e[0m\n\n", argv_mine);
//	printf("--------------------------------------------\n\n");
//	free(argv_real);
//	free(argv_mine);
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("%s\n\n", str);
//	printf("Original:\n");
//	printf("\e[92m%s\e[0m\n\n", real);
//
//	printf("My result:\n");
//	printf("\e[34m%s\e[0m\n", mine);
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	free(real);
//	free(mine);
//	return (0);
//}
