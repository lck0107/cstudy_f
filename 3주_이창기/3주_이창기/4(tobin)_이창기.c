#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int n, k, cnt, arr[35];

void DFS(int depth) {
	if (depth > n) {
		cnt = 0;
		for (int i = 1; i < depth; i++) {	// k개 만큼 1이 존재하는 이진수만 출력하게 하는 반복문.
			if (arr[i] == 1)	cnt++;
		}
		if (cnt == k) {
			for (int i = 1; i < depth; i++) {
				printf("%d", arr[i]);
			}
			printf("\n");
			return;
		}
		return;
	}

	for (int i = 1; i >= 0; i--) {
		arr[depth] = i;
		DFS(depth + 1);
	}
}




int main(void) {
	scanf("%d %d", &n, &k); // 2 1 , 2 0, 4 2
	DFS(1);
	return 0;
}