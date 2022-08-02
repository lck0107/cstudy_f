/*
	1. first~last의 덩어리에서 순차탐색으로 있는 지 확인.
	1-2 (중복되는 수 없을 경우) target을 다음 배열에 있는 수로 변경. 이 과정을 처음 수 + R번째 배열까지.
	2. (중복되는 수 있을 경우) 시작되는 수를 1 증가하여 1번과정 반복. 시작수 +R이 n이 될 때까지.
	3. 시작수 +R번째 배열까지 모두 중복 수 없으면 R 증가.

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int n,R,check=1;
int arr[100005];
int j;

// (arr, 1,3,2,arr[1]) num은 first+1 부터 시작.

int Lsearch(int arr[], int first, int last, int num, int array[]) { // 메모: 모르계따!!!~~~~ 포인터 매개변수 공부하고 마저 풀기
	if (num > last) {
	}
	return 1;	// 끝까지 만족해서 메인 함수에서 R 증가해주면 됨.

	if (array[i	] == arr[num]) {	// 중복 있을 경우
		if (first + R <= n)	Lsearch(arr, first + 1, last+1, first+2, target);
		else  return -1;	// 끝까지 돌렸는데 중복 없는 경우를 못 찾는 경우. (메인함수에서 target을 1증가해줘야함.)
	}
	else {	//중복 없을 경우
		Lsearch(arr, first, last, num + 1,target);
	}
}

int main(void) {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	R = 0;
	while (check == 1) {
		Lsearch(arr, 1, R, 2, arr[1]);
	}

	return 0;
}