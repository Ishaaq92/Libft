/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:21:16 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 11:52:48 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	if (!str)
		return (NULL);
	while (s[i] != 0)
	{
		str[i] = f(i, s[i]);
		i ++;
	}
	str[i] = 0;
	return (str);
}

// char    test(unsigned int n, char c)
// {
//     return ('k');
// }

// int main(void)
// {
//     char    *string = "hello";
//     printf("%s\n", ft_strmapi(string, test));

//     return (0);
// }