/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:20:54 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/04 10:35:29 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (check(set, s1[i]) == 1)
		i++;
	j = ft_strlen(s1) - 1;
	while (check(set, s1[j]) == 1)
		j --;
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}

// int main(void)
// {
//     const char    test[] = "    this is a test!!    ";
//     const char    set[] = " ";
//     const char    *result;
//     result = ft_strtrim(test, set);
//     printf("%s\n", result);
// }