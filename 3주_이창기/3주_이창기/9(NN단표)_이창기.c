/*
	cf)배열로 풀려햇는데, 초과 뜸.
	-> i, j 1부터 돌려서 target과 일치하는지 조회. 일치하면 num 증가시키고, 끝까지 가면 target을 1 증가.
	1) i*j가 일치하면? Lsearch(i,j+1,target,num+1)
	2) j가 N이랑 일치하면, i 증가.
	3) i*j 전체 다 돌면 target 1 증가하고 다시 1*1부터 돌리기.
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