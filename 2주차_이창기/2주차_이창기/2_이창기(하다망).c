/*
	1. ���ڿ� gets()�� �Է�
	2. �ݺ����Ἥ ����(�ƽ�Ű�ڵ� 32) ������ ���� (���� �ϳ� �� ���� �� ĭ���� �����)
	3. ���
*/

#include<stdio.h>

int main(void) {
	int s=0;
	char arr[100001]={0};
	gets(arr);
	for (int i = 0; i < 100000; i++) {
		if (s == 0) {
			if (arr[i] == 32) {
				s++;
			}
			arr[i] = arr[i + s];
		}
		else if(s!=0){
			if(arr[i+s]!=32)	arr[i] = arr[i + s];
			if (arr[i] == 32) {
				s++;
			}
		}
	}

	puts(arr);
	return 0;
}