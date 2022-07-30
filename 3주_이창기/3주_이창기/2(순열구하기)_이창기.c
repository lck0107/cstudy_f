#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int N, R, arr[11] = { 0 },check[5]={0};

void DFS(int depth) {
	if (depth > R) {
		check[1] = 0;
		for(int i=1; i<depth; i++){	// 9~14줄은 반복 출력을 제거하기 위한 이중 반복문.
			for (int j = 1; j < depth; j++) {
				if (i != j && arr[i] == arr[j]) {
					check[1] = -1;
				}
			}
		}	
		if (check[1] != -1) {
			for (int j = 1; j < depth; j++) {
				printf("%c", arr[j]);
			}
			printf("\n");
		}
		return;
	}
	else {
		for (int i = 0; i < N; i++) {
			arr[depth] = 97 + i;
			DFS(depth + 1);
		}
	}
}

int main(void) {
	scanf("%d %d", &N,&R); // 4 2
	DFS(1);
	return 0;
}