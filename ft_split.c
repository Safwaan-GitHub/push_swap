/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanoor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:47:09 by sanoor            #+#    #+#             */
/*   Updated: 2024/03/31 17:25:46 by sanoor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	countword(char *str, char c)
{
	int		count;
	bool	inword;

	count = 0;
	while (*str)
	{
		inword = false;
		while (*str == c && *str)
			str++;
		while (*str != c && *str)
		{
			if (!inword)
			{
				inword = true;
				count++;
			}
			str++;
		}
	}
	return (count);
}

static char	*get_word(char *str, char c)
{
	static int	count = 0;
	int			i;
	int			len;
	char		*word;

	i = 0;
	len = 0;
	while (str[count] == c && str[count])
		count++;
	while ((str[count + len] != c) && str[count + len])
		len++;
	word = malloc(sizeof(char) * len + 1);
	if (word == NULL)
		return (NULL);
	while ((str[count] != c) && str[count])
		word[i++] = str[count++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		count_words;
	char	**words;

	i = 0;
	count_words = countword(str, c);
	if (!count_words)
		exit(1);
	words = malloc(sizeof(char *) * (count_words + 2));
	if (words == NULL)
		return (NULL);
	while (count_words-- >= 0)
	{
		if (i == 0)
		{
			words[i] = malloc(sizeof(char));
			if (words[i] == NULL)
				return (NULL);
			words[i++][0] = '\0';
			continue ;
		}
		words[i++] = get_word(str, c);
	}
	words[i] = NULL;
	return (words);
}
