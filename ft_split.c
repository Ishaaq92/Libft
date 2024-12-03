/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:14:12 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/02 14:42:23 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	delimits(char const *s, char c) // DEFINE AS STATIC
{
	int	i;
	int	spaces;

	i = 0;
	spaces = 0;
	while (s[i] == c)
		i ++;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i ++;
			if (s[i] != '\0')
				spaces ++;
		}
		i ++;
	}
	return (spaces);
}

static int	wdlen(char const *s, char c, int start)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	while (s[start + i] != 0 && s[start + i] != c)
	{
		i ++;
		length ++;
	}
	return (length);
}

char	*setchrs(char *word, const char *s, int i, char c)
{
	int	j;

	j = 0;
	while (s[i] != c && s[i] != 0)
	{
		word[j] = s[i];
		i ++;
		j ++;
	}
	word[j] = 0;
	return (word);
}

int	skipdelimit(char const *s, char c, int i)
{
	while (s[i] == c)
		i ++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		word_index;
	int		current_length;

	i = 0;
	word_index = 0;
	array = malloc(sizeof(char *) * (delimits(s, c) + 1));
	while (s[i] != 0)
	{
		i = skipdelimit(s, c, i);
		current_length = wdlen(s, c, i);
		array[word_index] = malloc (sizeof(char *) * (current_length + 1));
		if (s[i] != c || s[i] == 0)
		{
			array[word_index] = setchrs(array[word_index], s, i, c);
			i += current_length;
			current_length = 0;
			word_index ++;
		}
		i = skipdelimit(s, c, i);
	}
	array[word_index] = 0;
	return (array);
}

// int main(void)
// {
// 	int	i;
// 	char	**words = ft_split("     ", ' ');

// 	i = 0;
// 	while (words[i] != 0)
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]);
// 		i ++;
// 	}
// 	free(words);
// 	printf("Number of words: %d\n", i);
// 	return (0);
// }
