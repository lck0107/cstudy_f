/*
	1개	(row1)
	2개	(row2)
	3개 (row3) .....
	n개	(row n)까지 별표시

	한 row x 에서 x만큼 *이 표시되도록 반복. -> for(int star=1; star<=row; star++)
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int row = 1; row <= n; row++)
	{
		for (int star=1; star<=row; star++)
			printf("*");
		printf("\n");
	}
	return 0;
}