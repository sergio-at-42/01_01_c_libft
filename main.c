/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeldjao <sbeldjao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:39:35 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/19 13:31:02 by sbeldjao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>

void	ft_suspend_display()
{
	int	i;

	while (scanf("%d", &i) == 1);
}

int	main()
{
	size_t	i;
	char	str_sergio[7] = "Sergio\0";
	char	str_qwerty[7] = "qwerty\0";
	char	str_box[7] = "vide\0";
	char	str_bigbox[19] = "Big box vide qwerty";
	char	str_num[6] = "75842\0";
	char	**str_tab;
	
	printf("ft_isalpha('S') => %d\n", ft_isalpha('S'));
	printf("ft_isalpha(-42) => %d\n", ft_isalpha(-42));
	printf("\n");
ft_suspend_display();
	printf("ft_isdigit('8') => %d\n", ft_isdigit('8'));
	printf("ft_isdigit('S') => %d\n", ft_isdigit('S'));
	printf("\n");

	printf("ft_isalnum('8') => %d\n", ft_isalnum('8'));
	printf("ft_isalnum('S') => %d\n", ft_isalnum('S'));
	printf("\n");

	printf("ft_isascii('S') => %d\n", ft_isascii('S'));
	printf("ft_isascii(142) => %d\n", ft_isascii(142));
	printf("\n");

	printf("ft_isprint('\\n') => %d\n", ft_isprint('\n'));
	printf("ft_isprint('S') => %d\n", ft_isprint('S'));
	printf("\n");

	printf("ft_toupper('s') => %c\n", ft_toupper('s'));
	printf("ft_toupper('Q') => %c\n", ft_toupper('Q'));
	printf("\n");

	printf("ft_tolower('S') => %c\n", ft_tolower('S'));
	printf("ft_tolower('r') => %c\n", ft_tolower('r'));
	printf("\n");

	printf("ft_strlen(\"Sergio\") => %lu\n", ft_strlen("Sergio"));
	printf("ft_strlen(\"Salut et encore merci pour le poisson...\") => %lu\n", ft_strlen("Salut et encore merci pour le poisson..."));
	printf("\n");

	printf("ft_strchr(\"Sergio\", '\\0') => %s\n", ft_strchr("Sergio", '\0'));
	printf("ft_strchr(\"Sergio\", 'g') => %s\n", ft_strchr("Sergio", 'g'));
	printf("\n");

	printf("ft_strrchr(\"Sergio\", '\\0') => %s\n", ft_strrchr("Sergio", '\0'));
	printf("ft_strrchr(\"Sergio\", 'S') => %s\n", ft_strrchr("Sergio", 'S'));
	printf("\n");

	printf("ft_strncmp(\"Sergio\", \"Sergio\", 6) => %d\n", ft_strncmp("Sergio", "Sergio", 6));
	printf("ft_strncmp(\"Sergio\", \"gio\", 3) => %d\n", ft_strncmp("Sergio", "gio", 3));
	printf("ft_strncmp(\"Sergio\", \"GIO\", 3) => %d\n", ft_strncmp("Sergio", "GIO", 3));
	printf("\n");

	printf("ft_memset(\"Sergio\", 'X', 3) => %s\n", (char *)ft_memset(str_sergio, 88, 3));
	printf("\n");

	printf("ft_memchr(\"%s\", 'g', 7) => %s\n", str_sergio, (char *)ft_memchr(str_sergio, 'g', 7));
	printf("\n");

	printf("ft_bzero(\"%s\", 3) => ", str_box);
	ft_bzero(str_box, 3);
	printf(">%s<\n", str_box);
	printf("\n");

	printf("ft_memcpy(\"%s\", \"%s\", 7) => ", str_box, str_qwerty);
	printf(">%s<\n", (char *)ft_memcpy(str_box, str_qwerty, 7));
	printf("\n");

	printf("ft_memcmp(\"%s\", \"%s\", 4) => %d\n", str_qwerty, str_qwerty, ft_memcmp(str_qwerty, str_qwerty, 4));
	printf("ft_memcmp(\"%s\", \"%s\", 5) => %d\n", str_sergio, str_qwerty, ft_memcmp(str_sergio, str_qwerty, 5));
	printf("ft_memcmp(\"%s\", \"%s\", 3) => %d\n", str_qwerty, str_sergio, ft_memcmp(str_qwerty, str_sergio, 3));
	printf("\n");

	printf("ft_memmove(\"%s\", \"%s\", 3) => ", str_qwerty, str_sergio);
	printf("%s\n", (char *)ft_memmove(str_qwerty, str_sergio, 3));
	printf("\n");

	printf("ft_strlcpy(\"%s\", \"%s\", 7) => ", str_box, str_qwerty);
	printf("%s >%lu<\n", str_box, ft_strlcpy(str_box, str_qwerty, 7));
	printf("\n");

	//printf("ft_strlcat(\"%s\", \"%s\", 3) => ", str_bigbox, str_sergio);
	//printf("%s >%lu<\n", str_bigbox, ft_strlcat(str_bigbox, str_sergio, 3));
	printf("strlcat(\"%s\", \"%s\", 3) => ", str_bigbox, str_sergio);
	printf("%s >%lu<\n", str_bigbox, strlcat(str_bigbox, str_sergio, 3));
	//printf("%s >%lu<\n", str_bigbox, ft_strlcat(str_bigbox, "str_sergio_Et ta soeur", 150));
	printf("\n");

	printf("ft_strnstr(\"%s\", \"%s\", 4) => %s\n", str_qwerty, str_qwerty, ft_strnstr(str_qwerty, str_qwerty, 4));
//	printf("ft_strnstr(\"%s\", \"%s\", 5) => %s\n", str_sergio, str_qwerty, ft_strnstr(str_sergio, str_qwerty, 5));
	printf("ft_strnstr(\"%s\", \"%s\", 3) => %s\n", str_qwerty, str_sergio, ft_strnstr(str_qwerty, str_sergio, 3));
	printf("ft_strnstr(\"%s\", \"gio\", 3) => %s\n", str_sergio, ft_strnstr(str_sergio, "gio", 3));
	printf("ft_strnstr(\"%s\", \"\", 3) => %s\n", str_sergio, ft_strnstr(str_sergio, "", 3));
	printf("ft_strnstr(\"heysergio\", \"io\", 8) => %s\n", ft_strnstr("heysergio", "io", 8));
	printf("ft_strnstr(\"heysergiowww\", \"wio\", 0) => %s\n", ft_strnstr("heysergiowww", "wio", 8));
	printf("ft_strnstr(\"\", \"heybobybob\", -1) => %s\n", ft_strnstr("", "heybobybob", -1));
	printf("\n");

	printf("ft_atoi(\"%s\") => %d\n", str_qwerty, ft_atoi(str_qwerty));
	printf("ft_atoi(\"%s\") => %d\n", str_num, ft_atoi(str_num));
	printf("ft_atoi(\"   -16\") => %d\n", ft_atoi("   -16"));
	printf("ft_atoi(\"  +64\") => %d\n", ft_atoi("  +64"));
	printf("ft_atoi(\"  12\") => %d\n", ft_atoi("  12"));
	printf("\n");

	printf("ft_calloc(4, 4) => %p\n", ft_calloc(4, 4));
	printf("ft_calloc(18446744073709551615, 4) => %p\n", ft_calloc(184467440737095516, 104));
	printf("\n");

	printf("ft_strdup(\"%s\") => %s\n", str_sergio, ft_strdup(str_sergio));
	printf("\n");

	printf("ft_strjoin(\"%s\", \"%s\") => %s\n", str_qwerty, str_sergio, ft_strjoin(str_qwerty, str_sergio));
	printf("ft_strjoin(\"Salut, \", \"et encore merci pour le poisson ;-)\") => %s\n", ft_strjoin("Salut, ", "et encore merci pour le poisson ;-)"));
	printf("\n");

	printf("ft_strtrim(\"  ## Salut, et encore merci# pour le poisson# ;-)   ## # #\", '#') => %s\n", ft_strtrim("  ## Salut, et encore merci# pour le poisson# ;-)   ## # #", " #"));
	printf("\n");
	
	printf("ft_split(\"Salut#, et encore merci# pour le poisson# ;-)\", '#') => \n");
	str_tab = ft_split("Salut#, et encore merci# pour le poisson# ;-)", '#');
	i = 0;
	while (str_tab[i] != NULL)
	{
		printf(">%s<\n", str_tab[i]);
		i++;
	}
	printf("\n");
	

	printf("SIZE_MAX => %lu\n", SIZE_MAX);

	return (0);
}
