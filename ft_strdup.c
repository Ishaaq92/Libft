/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:40:26 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/04 14:19:46 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*duplicate;

	i = 0;
	duplicate = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!duplicate)
		return (NULL);
	while (s[i] != 0)
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = 0;
	return (duplicate);
}

// int main(void)
// {
//     char    *test = "this is a test!!";
//     printf("%s\n", ft_strdup(test));
//     printf("%s\n", strdup(test));

//     return (0);
// }