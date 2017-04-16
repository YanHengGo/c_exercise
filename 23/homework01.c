#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *array[5]={"FishC","Five","Star","Good","WoW"};
	char *(*p)[5]=&array;
	int i,j;
	for (i=0;i<5;i++)
	{
		for(j=0; (*p)[i][j]!='\0';j++)
		{
			printf("%c",*(*(*p+i)+j));
		}
		printf("\n");
	}
	return 0;
}