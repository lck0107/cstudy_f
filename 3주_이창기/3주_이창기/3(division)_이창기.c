#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int idx,n,sum=0,arr[1000]={0};
int cnt = 0;

void DFS(int depth) {
	if (depth > n) {
		idx = 0;
		for (int j = 1; j < depth; j++) {
			sum = sum + arr[j];
			if (sum == n) {
				idx = j;
			}
		}
		if (idx != 0) {
			for (int k = 1; k <= idx; k++) {
				printf("%d+", arr[k]);
			}
			cnt++;
			printf("\b \n");
		}
		sum = 0;
		return;
	}
	for (int i = n - 1; i >= 1; i--) {
		arr[depth] = i;
		if (depth==1 || arr[depth] <= arr[depth - 1]) {	// 2. 다음에 표시될 수가 전 수보다 작거나 같게 출력하도록 하는 반복문.
			DFS(depth + 1);
		}
	}
}

int main(void) {
	scanf("%d", &n);
	DFS(1);
	printf("%d", cnt);
	return 0;
}



/*
void DFS(int depth) {
	for (int j = 1; j <= depth; j++) {
		if (arr[j] <= arr[j - 1]) {
			sum += arr[j];
		}
		if (sum > n) {
			sum == 0;
			return;
		}
		if (sum == n) {
			printf("%d+", arr[j]);
		}
	printf("\b \n");
	}
	for (int i = n - 1; i >= 1; i--) {
		arr[depth] = i;
		DFS(depth + 1);
	}
}

int main(void) {
	scanf("%d", &n);
	DFS(1);

	return 0;
}
*/
