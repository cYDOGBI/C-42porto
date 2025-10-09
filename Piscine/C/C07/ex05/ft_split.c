/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:39:06 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/06 12:11:45 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int is_charset(char ch, char *charset) {
        int i;

		i = 0;
        while (charset[i])
		{
            if (ch == charset[i]) 
				return 1;
            i++;
        }
        return 0;
}

char **ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		c;

	res = malloc(ft_strlen(str) + 1);
	i = 0;
	c = 0;
	while (str[i] != '\0') {
        if (i == 0 || is_charset(str[i - 1], charset))
			printf("I in %c\n", str[i]);
        if (str[i + 1] == '\0' || is_charset(str[i + 1], charset))
            printf("F in %c\n", str[i]);
        i++;
    }

         /* copy the world at the first free index in our words array */
   /* return our words array */  
   return (res); 
}
/*
int word_count()
{
   //find and return the number of words in the string
}

void ft_free()
{
   //free EVERYTHING you allocated
   //each element of the array as well as the array
}

char *fill_word()
{
   //allocate enough room for the word
   //copy the word into the memory you allocated above
   //return the allocated word
} */

int	main(void)
{
	char 	*str = "abc--def+ghi*jkl";
	char 	*charset = "-+*";
	//char	**rest = ft_split(str, charset);
	//int		i = 0;
	ft_split(str, charset);
	/* while (i < 5)
		printf("%s\n", rest[i++]); */
	return (0);
}