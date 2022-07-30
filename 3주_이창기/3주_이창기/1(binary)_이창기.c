// 어렸을 때 2진법 계산하던 그림 떠올리며 풀이.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num, i, s=0;
	int arr[15]={0};
	scanf("%d", &num);
	for (i = 1; num > 0; i++) {
		arr[i] = num % 2;
		num = num / 2;
		s++;
	}
	for (i = s; i >= 1; i--) {
		printf("%d", arr[i]);
	}
	return 0;
}