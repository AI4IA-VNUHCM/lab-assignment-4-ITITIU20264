/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i, j;
int space;
int line = 1;
void Ex1(int rows){
	for(i = 0; i < rows; i++)
	{
		for(space = 1; space <= rows - i; space++)
		{
			printf("");
		}
		for(j = 0; j <= i; j++)
		{
			if(j == 0 || i == 0)
			{
				line = 1;
			}
			else
			{
				line = line * (i - j + 1) / j;
			}
			printf("%d ", line);
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]){
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase + 1);
	return 0;
}
