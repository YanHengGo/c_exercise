#include <stdio.h>

void homework01(){
	int a[5] = {1, 2, 3, 4, 5};
	int *b;

	b = &a[3];
	printf("%d\n", b[-2]);
}
void homework03(){
	int a=2,b=3;
	
	a+=b;
	b=a-b;
	a-=b;
	
	printf("a=%d , b=%d \n",a,b);
}

void homework05(){
	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p = (int *)(&array + 1);

	printf("%d\n", *(p - 6));//4
}
void homework06(){
	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int (*p)[10]=&array;
	printf("%d\n",*(*(p+1)-6));//4
}
int main()
{
	homework01();
	homework03();
	homework05();
	homework06();
	
	return 0;
}


