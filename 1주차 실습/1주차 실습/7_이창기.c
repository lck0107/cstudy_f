/* 
	1. 띄어쓰기해서 두 수 입력 받아 변수 N, M에 각각 저장. 
	2. N부터 M사이의 자연수 출력 -> 반복문 이용해서 새로 선언된 변수 num이 N과 M 사이일 때 출력되게 설정 -> num = num + 1 (num++)
	3. 새로운변수를 지정해서 8줄마다(변수가 8로 나눌 때 나머지가 0이될 때 마다) 바뀌게 설정.

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int N, M, i, linechange = 1;
	scanf("%d%d", &N, &M);
	for (i = N; i <= M; i++)
	{
		if (linechange % 8 == 0) {
			printf("%d\n", i);
		}
		else {
			printf("%d ", i);
		}
		linechange++;
	}
	return 0;
}