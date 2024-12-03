/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:58:34 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 11:58:54 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		len1;
	int		len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	while (i < len1)
	{
		str[i] = s1[i];
		i ++;
	}
	i = 0;
	while (i < len2)
	{
		str[len1 + i] = s2[i];
		i ++;
	}
	str[len1 + len2] = 0;
	return (str);
}

// int main(void)
// {
//     printf("%s\n", ft_strjoin("hello", "world"));

//     return (0);
// }