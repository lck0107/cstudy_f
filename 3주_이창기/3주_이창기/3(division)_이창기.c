#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int idx, n, sum = 0,sum2=0, arr[1000];
int cnt = 0;

//ù Ǯ�̋��� �ڵ嵵 ��� ��Ÿ�� ������ ����. ������ ���ο� �μ�(sum)�� �߰��ϴ� �ذ�Ǿ���.
//Ǯ �� sum�κ� ������ �ݺ����� ���ʿ��ϰ� ���� �ۼ��ߴµ�, �׳� ���ڷ� �߰��ϸ� �ʱ�ȭ ������ ���־���.
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
		if (depth == 1 || arr[depth] <= arr[depth - 1]) {	// 2. ������ ǥ�õ� ���� �� ������ �۰ų� ���� ����ϵ��� �ϴ� �ݺ���.
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