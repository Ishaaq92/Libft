/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:59:33 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/06 17:39:43 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbrwords(char const *s, char c)
{
	int	i;
	int	number;

	number = 0;
	if (c == 0)
		return (1);
	if (!s)
		return (0);
	i = 0;
	while (s[i] == c && s[i] != '\0')
		i ++;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			number ++;
			while (s[i] != c && s[i] != 0)
				i ++;
		}
		while (s[i] == c && s[i] != '\0')
			i ++;
	}
	return (number);
}

static int	wdlen(char const *s, char c, int start)
{
	int	i;

	i = 0;
	while (s[start + i] != 0 && s[start + i] != c)
		i ++;
	return (i);
}

int	setchrs(char *word, char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != c && s[i] != 0)
		word[j++] = s[i++];
	word[j] = '\0';
	return (i);
}

int	freedem(char **array, int word)
{
	if (!array[word])
	{
		while (word > 0)
			free (array[--word]);
		free(array);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		word;

	word = 0;
	array = malloc(sizeof(char *) * (nbrwords(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (s[i] == c && s[i] != '\0')
		i ++;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			array[word] = malloc(sizeof(char) * (wdlen(s, c, i) + 1));
			if (freedem(array, word) == 1)
				return (NULL);
			i = setchrs(array[word++], s, c, i);
		}
		while (s[i] == c && s[i] != '\0')
			i ++;
	}
	array[word] = NULL;
	return (array);
}

// int		main(void)
// {
// 	char	s[] = "test";
// 	char	**words;
// 	int		i;

// 	i = 0;
// 	words = ft_split(s, 0);
// 	while (words[i] != 0)
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]);
// 		i ++;
// 	}
// 	free(words);
// }