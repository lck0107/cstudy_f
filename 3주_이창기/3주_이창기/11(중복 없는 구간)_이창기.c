/*
	1. first~last�� ������� ����Ž������ �ִ� �� Ȯ��.
	1-2 (�ߺ��Ǵ� �� ���� ���) target�� ���� �迭�� �ִ� ���� ����. �� ������ ó�� �� + R��° �迭����.
	2. (�ߺ��Ǵ� �� ���� ���) ���۵Ǵ� ���� 1 �����Ͽ� 1������ �ݺ�. ���ۼ� +R�� n�� �� ������.
	3. ���ۼ� +R��° �迭���� ��� �ߺ� �� ������ R ����.

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int n,R,check=1;
int arr[100005];
int j;

// (arr, 1,3,2,arr[1]) num�� first+1 ���� ����.

int Lsearch(int arr[], int first, int last, int num, int array[]) { // �޸�: �𸣰��!!!~~~~ ������ �Ű����� �����ϰ� ���� Ǯ��
	if (num > last) {
	}
	return 1;	// ������ �����ؼ� ���� �Լ����� R �������ָ� ��.

	if (array[i	] == arr[num]) {	// �ߺ� ���� ���
		if (first + R <= n)	Lsearch(arr, first + 1, last+1, first+2, target);
		else  return -1;	// ������ ���ȴµ� �ߺ� ���� ��츦 �� ã�� ���. (�����Լ����� target�� 1�����������.)
	}
	else {	//�ߺ� ���� ���
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