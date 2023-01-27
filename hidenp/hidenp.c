#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *s)
{
	int i;
	i = 0;
	while(s[i])
		i++;
	return(i);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
	int hs_len = ft_strlen(argv[2]);
	int ne_len = ft_strlen(argv[1]);
	//printf("hslen: %d\n", hs_len);
	//printf("ne len: %d\n", ne_len);
	int i = 0;
	int j = 0;
	int match_counter = 0;
		//printf("%s", argv[2]);
		// do stuff
		while(argv[2][i])
		{
			if(argv[2][i] == argv[1][j])
			{
				j++;
				match_counter++;
				//printf("%c", argv[2][i]);
			}
			i++;
		}
		if(match_counter == ne_len)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}

	write(1, "\n", 1);
}
