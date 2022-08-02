/*
	cf)�迭�� Ǯ���޴µ�, �ʰ� ��.
	-> i, j 1���� ������ target�� ��ġ�ϴ��� ��ȸ. ��ġ�ϸ� num ������Ű��, ������ ���� target�� 1 ����.
	1) i*j�� ��ġ�ϸ�? Lsearch(i,j+1,target,num+1)
	2) j�� N�̶� ��ġ�ϸ�, i ����.
	3) i*j ��ü �� ���� target 1 �����ϰ� �ٽ� 1*1���� ������.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int N, K;

void Lsearch(int i, int j, int target, int num) {
	if (num == K) {
		printf("%d", target);
		return;
	}
	else {
		if (i == N && j > N)	Lsearch(1, 1, target + 1, num);
		else if (j > N)	Lsearch(i + 1, 1, target, num);
		else if (i * j == target) {
			Lsearch(i, j + 1, target, num + 1);
		}
		else Lsearch(i, j + 1, target, num);
	}

}


int main(void) {
	scanf("%d %d", &N, &K);
	Lsearch(1, 1, 1, 0);
	return 0;
}