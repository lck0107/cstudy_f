/*
	1. gets 함수 써서 문자열 입력받기.
	2. 반복문(0부터 strlen/2 -1 까지 반복)작성해서 판별해서 맞으면 YES, 아니면 NO 출력.
*/
#include<stdio.h>
#include<string.h>

int main(void) {
	int result = 1;
	char arr[1001]={0};
	gets(arr);

	for (int i = 0; i <= strlen(arr) / 2 -1; i++) {
		if (arr[i] != arr[strlen(arr) - 1 - i]) {
			result = 0;
			break;
		}
	}

	// 위에까지 했는데 YES를 출력하는 법을 몰라서 변수 result를 새로 만들어 출력단계는 따로 추가.
	if (result == 0)	printf("NO");
	else if (result == 1)	printf("YES");



	return 0;
}