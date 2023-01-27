/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:54:54 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/27 15:23:39 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		i = 0;
		int letter;
		while(argv[1][i] != '\0')
		{
			letter = argv[1][i];
			if((letter >= 'A' && letter < 'Z') || (letter >= 'a' && letter < 'z'))
				letter = letter + 1;
			else if (letter == 'z' || letter == 'Z')
				letter = letter - 25;
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}