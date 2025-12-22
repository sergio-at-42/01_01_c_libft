/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:30:34 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/24 16:52:26 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : Allocates (with malloc) and returns an array of strings obtained 
by splitting ’s’ using the character ’c’ as a delimiter. 
The array must end with a NULL pointer.
*/
/*
Return : The array of new strings resulting from the split. NULL if the 
allocation fails.
*/
static size_t	ft_nb_word(const char *str, char c)
{
	size_t	i;
	size_t	nb_word;

	nb_word = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			nb_word++;
		while (str[i] != c && str[i])
			i++;
	}
	return (nb_word);
}

static char	**ft_split_word(char const *s, char c, char **tab_word)
{
	size_t	word;
	size_t	start;
	size_t	i;

	word = 0;
	start = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			tab_word[word] = ft_substr(s, start, i - start);
			word++;
		}
	}
	tab_word[word] = NULL;
	return (tab_word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab_word;

	if (!s || !c)
		return (NULL);
	tab_word = (char **)malloc((ft_nb_word(s, c) + 1) * sizeof(char *));
	if (!tab_word)
		return (NULL);
	return (ft_split_word(s, c, tab_word));
}
