/*
	1. gets �Լ��� ���ڿ� �Է¹ޱ�.
	2. �ݺ��� ������ �����迭�� ���ؼ� ���� ��� �ٸ���� ����.
	arr1���� Ž���ؼ� arr2�� ����� ���� ���� �ֱ�.
*/
#include<stdio.h>
#include<string.h>

int main(void) {
	char arr1[1001] = { 0 }, arr2[1001] = { 0 };
	int  tmp[1001]={0};
	int s=1, j=0;
	gets(arr1);
	for (int i = 1; i <= strlen(arr1); i++) {
		if (arr1[i] != arr1[i - 1]) {	// �� �����Ͱ��� ���� ������� -> s ���� �ֳ� ����(1���� 2����)�� �����ؼ� �ۼ�.
			if (s == 1) {
				arr2[j] = arr1[i - 1];
				j++;
			}
			else if (s>1) {
				tmp[j] = s;
				j++;
				arr2[j] = arr1[i-1];
				j++;
				s = 1;
			}
		}
		else if (arr1[i] == arr1[i - 1]) { // �� �����Ͱ��� ���� ��� : s�� ������Ű�� �������� �Ѿ��.
			s++;
		}
	}
	// puts(arr2); -> �̷��� �ϸ� ����(s)�� �ƽ�Ű �ڵ带 ���� �̻��� ��ȣ�� ��µ�. ���� ���ڸ� ������� �����׸� tmp�� ���� �� ����.
	
	for (int i = 0; i < j; i++) {	//sss
		if (tmp[i] == 0) {
			printf("%c", arr2[i]);
		}
		else {
			printf("%d", tmp[i]);
		}
	}

	return 0;
}