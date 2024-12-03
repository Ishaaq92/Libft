/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:44:06 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 11:44:57 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			ptr = (char *) &s[i];
		i ++;
	}
	return (ptr);
}

// int main(void)
// {
// 	char	*string = "hello world\n";
// 	printf("%s \n", ft_strrchr(string, 65));
// }