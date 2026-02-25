/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_with_space.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:08:53 by osukhore          #+#    #+#             */
/*   Updated: 2026/02/25 13:00:37 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_space(char const *s1, char const *s2)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;
	char	*str;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *)malloc(s1_len + s2_len + 2);
	if (str == 0)
		return (0);
	str[0] = ' ';
	while (++i < s1_len)
		str[i] = s1[i];
	i = -1;
	while (++i < s2_len)
		str[s1_len + i] = s2[i];
	str[s1_len + i] = '\0';
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
//	char	const	s1[] = "Never gonna give you up, ";
//	char	const	s2[] = "never gonna let you down";
//	char			*join;
//	char			*argv_s1 = argv[1];
//	char			*argv_s2  = argv[2];
//	char			*argv_join;
//
//	//ERROR CHECK
//	if (argc < 3)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need 2x ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String 1| \n |2. String 2| \e[0m\n");
//		return (0);
//	}
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_strjoin.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("s1 =\t%s\ns2 =\t%s\n\n", argv_s1, argv_s2);
//	argv_join = ft_strjoin(argv_s1, argv_s2);
//	if (argv_join == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		return (0);
//	}
//	printf("My result:\n\e[34m%s\e[0m\n\n", argv_join);
//	printf("--------------------------------------------\n\n");
//	free(argv_join);
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("s1 =\t%s\ns2 =\t%s\n\n", s1, s2);
//	join = ft_strjoin(s1, s2);
//	if (join == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		return (0);
//	}
//	printf("My result:\n\e[34m%s\e[0m\n", join);
//	free(join);
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
