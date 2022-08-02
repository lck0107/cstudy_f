#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int idx, n, sum = 0,sum2=0, arr[1000];
int cnt = 0;

//첫 풀이떄는 코드도 길고 런타임 오류가 떴다. 하지만 새로운 인수(sum)를 추가하니 해결되었다.
//풀 때 sum부분 때문에 반복문을 불필요하게 많이 작성했는데, 그냥 인자로 추가하면 초기화 역할을 해주었다.
void DFS(int depth,int sum) {
	if (sum > n)	return;
	if (sum==n) {
		for (int k = 1; k <depth; k++) {
			if (k == depth-1)	printf("%d\n", arr[k]);
			else printf("%d+", arr[k]);
		
		}
		cnt++;
		return;
	}
	for (int i = n - 1; i >= 1; i--) {
		arr[depth] = i;
		if (depth == 1 || arr[depth] <= arr[depth - 1]) {	// 2. 다음에 표시될 수가 전 수보다 작거나 같게 출력하도록 하는 반복문.
			DFS(depth + 1,sum+i);
		}
	}
}

int main(void) {
	scanf("%d", &n);
	DFS(1,0);
	printf("%d", cnt);
	return 0;
}