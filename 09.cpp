#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num,num1;
	for (num=1;num<=9;num++)
{
	for (num1=1;num1<=9;num1++)
	printf("%d*%d=%2d  ",num,num1,num*num1);
	printf("\n");
}
	system("pause");
	return 0;
}
