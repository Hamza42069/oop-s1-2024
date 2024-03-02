#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	char	lvl;
	char	ex;

	if (ac != 3)
	{
		printf("no, fuck you!\n");
		return (0);
	}
	lvl = av[1][0];
	ex = av[2][0];
	char str[] = "g++ function-0-0.cpp main-0-0.cpp";
	char git[] = "git add function-0-0.cpp main-0-0.cpp";
	str[13] = lvl;
	str[15] = ex;
	str[26] = lvl;
	str[28] = ex;
	git[17] = lvl;
	git[19] = ex;
	git[30] = lvl;
	git[32] = ex;
	system(str);
	//printf("%s", git);
	system(git);
	system("git commit -m \"tj the best\" --quiet");
	system("git push --quiet");
	system("./a.out && rm ./a.out");
	return (0);
}
