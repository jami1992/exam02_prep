/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:26:27 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/27 16:22:47 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		i = 0;
		while(argv[1][i] != '\0')
			i++;
		//printf("number of last char: %d\n", i);
		//printf("last char: %c\n", argv[1][i-1]);

		while((argv[1][i-1] == ' ' || argv[1][i-1] == '\t' || argv[1][i-1] == '\r' || argv[1][i-1] == '\v' || argv[1][i-1] == '\n') && i >= 0)
			i--;
		//printf("number of last non-ws-char: %d\n", i);
		//printf("last non-ws-char: %c\n", argv[1][i-1]);

		while((argv[1][i-1] != ' ' && argv[1][i-1] != '\t' && argv[1][i-1] != '\r' && argv[1][i-1] != '\v' && argv[1][i-1] != '\n') && i >= 0)
			i--;

		while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t'&& argv[1][i] != '\r' && argv[1][i] != '\v' && argv[1][i] != '\n')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		

	}
	write(1, "\n", 1);
}