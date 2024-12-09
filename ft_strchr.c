/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:45:28 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/05 10:48:41 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (!ft_isascii(c))
		return ((char *) &s[i]);
	while (s[i] != 0)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i ++;
	}
	if (c == 0)
		return ((char *) &s[i]);
	return (0);
}

// int main(void)
// {
//     printf("%s\n", ft_strchr("tripouille", 't' + 256));
// 	return (0);
// }