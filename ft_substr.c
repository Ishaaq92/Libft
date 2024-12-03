/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:21:09 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 11:57:10 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	if (ft_strlen(s) < start || ft_strlen(s) < len + start)
		return (NULL);
	i = 0;
	ptr = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		ptr[i] = s[start + i];
		i ++;
	}
	ptr[i] = 0;
	return (ptr);
}

// int main(void)
// {
//     char    *substring = ft_substr("hello world", 4, 5);
//     printf("%s\n", substring);
// }