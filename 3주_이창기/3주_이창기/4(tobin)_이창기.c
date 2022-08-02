#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int n, k, arr[35];

//�굵 3��ó�� ���ο� ���� �߰��ϸ� �ð� ���� ���� �� ����.
//���� �˾Ҵµ� 2���ε� �ݺ����Ἥ �ð����� ���� �ſ���.(arr[depth]=1 ~ DFS(depth+1,cnt) ����)
void DFS(int depth,int cnt) {
	if (cnt > k)	return;		// ���� �� ���� ������ �ƴ϶� �갡 �����̾���. ���� ���� Ž�� �ٿ��ִ� �ڵ� �� �־�� �ð� ������ �ȶ��.
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