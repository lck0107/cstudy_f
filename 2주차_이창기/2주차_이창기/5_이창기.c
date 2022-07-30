/*
	1. gets 함수로 문자열 입력받기.
	2. 반복문 돌려서 이전배열과 비교해서 같을 경우 다를경우 구분.
	arr1에서 탐색해서 arr2에 출력을 위한 값들 넣기.
*/
#include<stdio.h>
#include<string.h>

int main(void) {
	char arr1[1001] = { 0 }, arr2[1001] = { 0 };
	int  tmp[1001]={0};
	int s=1, j=0;
	gets(arr1);
	for (int i = 1; i <= strlen(arr1); i++) {
		if (arr1[i] != arr1[i - 1]) {	// 전 데이터값과 같지 않을경우 -> s 값이 있냐 없냐(1개냐 2개냐)로 구분해서 작성.
			if (s == 1) {
				arr2[j] = arr1[i - 1];
				j++;
			}
			else if (s>1) {
				tmp[j] = s;
				j++;
				arr2[j] = arr1[i-1];
				j++;
				s = 1;
			}
		}
		else if (arr1[i] == arr1[i - 1]) { // 전 데이터값과 같을 경우 : s값 증가시키고 다음으로 넘어가기.
			s++;
		}
	}
	// puts(arr2); -> 이렇게 하면 숫자(s)가 아스키 코드를 따라서 이상한 기호가 출력됨. 따라서 숫자만 담기위한 정수그릇 tmp을 새로 또 만듦.
	
	for (int i = 0; i < j; i++) {	//sss
		if (tmp[i] == 0) {
			printf("%c", arr2[i]);
		}
		else {
			printf("%d", tmp[i]);
		}
	}

	return 0;
}