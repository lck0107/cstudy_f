#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int n, k, arr[35];

//얘도 3번처럼 새로운 인자 추가하면 시간 제한 줄일 수 있음.
//인줄 알았는데 2개인데 반복문써서 시간제한 떴던 거였음.(arr[depth]=1 ~ DFS(depth+1,cnt) 까지)
void DFS(int depth,int cnt) {
	if (cnt > k)	return;		// 위에 두 줄이 범인이 아니라 얘가 범인이었음. 쓸데 없는 탐색 줄여주는 코드 꼭 넣어야 시간 제한이 안뜬다.
	if (depth > n) {
		if (cnt == k) {
			for (int i = 1; i < depth; i++) {
				printf("%d", arr[i]);
			}
			printf("\n");
			return;
		}
		return;
	}

	arr[depth] = 1;
	DFS(depth + 1, cnt + 1);
	arr[depth] = 0;
	DFS(depth + 1, cnt);
}

int main(void) {
	scanf("%d %d", &n, &k); // 2 1 , 2 0, 4 2
	DFS(1,0);
	return 0;
}