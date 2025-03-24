/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:07:32 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/19 12:34:33 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	append_node(struct s_node **lst, char *buffer)
{
	struct s_node	*new_node;
	struct s_node	*current;

	new_node = (struct s_node *)malloc(sizeof(struct s_node));
	if (!new_node)
		return ;
	new_node->text = buffer;
	new_node->next = NULL;
	if (!*lst)
	{
		*lst = new_node;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
}

int	check_for_nl(struct s_node **lst)
{
	struct s_node	*current;
	int				length;
	int				i;

	if (lst == NULL || *lst == NULL)
		return (-1);
	length = 0;
	current = *lst;
	while (current != NULL && current->text != NULL)
	{
		i = 0;
		while (current->text[i] != '\0')
		{
			length++;
			if (current->text[i++] == '\n')
				return (length);
		}
		current = current->next;
	}
	return (-1);
}

int	check_for_no_nl(struct s_node **lst)
{
	struct s_node	*current;
	int				length;
	int				i;

	if (lst == NULL || *lst == NULL)
		return (0);
	length = 0;
	current = *lst;
	while (current != NULL)
	{
		i = 0;
		while (current->text[i++] != '\0')
			length++;
		current = current->next;
	}
	return (length);
}

char	*get_line(struct s_node **lst, int line_len)
{
	struct s_node	*current;
	char			*line;
	int				i;
	int				j;

	i = 0;
	current = *lst;
	if (line_len == 0)
		return (NULL);
	line = malloc(sizeof(char) * (line_len + 1));
	while (current != NULL)
	{
		j = 0;
		while (current->text[j] != '\n' && current->text[j] != '\0')
			line[i ++] = current->text[j ++];
		if (current->text[j] == '\n')
			line[i] = '\n';
		current = current->next;
	}
	line[line_len] = '\0';
	return (line);
}

int	ft_strchri(const char *s, int c, int start)
{
	while (s[start] != 0)
	{
		if (s[start] == c)
			return (start);
		start ++;
	}
	return (-1);
}
