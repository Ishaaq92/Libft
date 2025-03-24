/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:06:37 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/19 12:34:30 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	create_ll(int fd, struct s_node **lst)
{
	ssize_t		num_read;
	char		*buffer;
	int			line_len;
	int			nl_pos;

	line_len = check_for_no_nl(lst);
	while (1)
	{
		buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buffer)
			return (-1);
		num_read = read(fd, buffer, BUFFER_SIZE);
		if (num_read <= 0)
		{
			free(buffer);
			return (line_len);
		}
		buffer[num_read] = '\0';
		append_node(lst, buffer);
		nl_pos = ft_strchri(buffer, '\n', 0);
		if (nl_pos >= 0)
			return (line_len + (nl_pos + 1));
		line_len += (int)num_read;
	}
}

void	clean_ll(struct s_node **lst, struct s_node *current, int i)
{
	struct s_node	*temp;
	int				nl_pos;

	while (current != NULL)
	{
		nl_pos = ft_strchri(current->text, '\n', 0);
		if (nl_pos >= 0)
			break ;
		temp = current->next;
		free(current->text);
		free(current);
		current = temp;
	}
	*lst = current;
	if (nl_pos++ == -1)
		return ;
	while (current->text[nl_pos + i] != '\0')
	{
		current->text[i] = current->text[nl_pos + i];
		i ++;
	}
	current->text[i] = '\0';
	*lst = current;
}

char	*get_next_line(int fd)
{
	char					*line;
	int						line_len;
	static struct s_node	*starts[FOPEN_MAX];

	if (fd < 0 || BUFFER_SIZE < 1 || fd >= FOPEN_MAX)
		return (NULL);
	line_len = check_for_nl(&starts[fd]);
	if (line_len < 0)
		line_len = create_ll(fd, &starts[fd]);
	if (!starts[fd] || line_len == -1)
		return (NULL);
	line = get_line(&starts[fd], line_len);
	clean_ll(&starts[fd], starts[fd], 0);
	return (line);
}
// int main(int ac, char *av[])
// {
// 	int fd = open("test.txt", O_RDONLY);
// 	char	*line;

// 	// line = get_next_line(fd);
// 	// while (line != NULL)
// 	// {
// 	// 	printf("%s", line);
// 	// 	line = get_next_line(fd);
// 	// }
// 	line = get_next_line(fd);
// 	printf("%s", line);

// 	line = get_next_line(fd);
// 	printf("%s", line);

// 	// line = get_next_line(fd);
// 	// printf("%s", line);

// 	close(fd);
// 	return (0);
// }