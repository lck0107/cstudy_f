/*
	10번과 다른 점 : x번째 행에서 입력받은 수 n-x 만큼의 공백이 필요함. / 별 갯수가 x개가 아닌 2x-1로 다름.
	(n=4일 경우)
	row 1 : 세칸띄고 별 1개
	row 2 : 두칸띄고 별 3개
	row 3 : 한칸띄고 별 5개
	row 4 : 0칸띄고 별 7개
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	
	for(int row = 1; row <= n; row++)
	{
		for (int tab = 1; tab <= n - row; tab++)
			printf(" ");
		for (int star = 1; star <= 2 * row -1 ; star++) // x번 반복하고 싶을 경우 -> for (시작-보통 1; 반복하고 싶은 횟수; 변수++)
			printf("*");
		printf("\n");
	}
	return 0;
}

