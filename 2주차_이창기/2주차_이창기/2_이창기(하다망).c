/*
	1. 문자열 gets()로 입력
	2. 반복문써서 띄어쓰기(아스키코드 32) 있으면 제거 (변수 하나 더 만들어서 앞 칸으로 땡기기)
	3. 출력
*/

#include<stdio.h>

int main(void) {
	int s=0;
	char arr[100001]={0};
	gets(arr);
	for (int i = 0; i < 100000; i++) {
		if (s == 0) {
			if (arr[i] == 32) {
				s++;
			}
			arr[i] = arr[i + s];
		}
		else if(s!=0){
			if(arr[i+s]!=32)	arr[i] = arr[i + s];
			if (arr[i] == 32) {
				s++;
			}
		}
	}

	puts(arr);
	return 0;
}