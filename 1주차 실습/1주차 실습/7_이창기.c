/* 
	1. �����ؼ� �� �� �Է� �޾� ���� N, M�� ���� ����. 
	2. N���� M������ �ڿ��� ��� -> �ݺ��� �̿��ؼ� ���� ����� ���� num�� N�� M ������ �� ��µǰ� ���� -> num = num + 1 (num++)
	3. ���ο���� �����ؼ� 8�ٸ���(������ 8�� ���� �� �������� 0�̵� �� ����) �ٲ�� ����.

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int N, M, i, linechange = 1;
	scanf("%d%d", &N, &M);
	for (i = N; i <= M; i++)
	{
		if (linechange % 8 == 0) {
			printf("%d\n", i);
		}
		else {
			printf("%d ", i);
		}
		linechange++;
	}
	return 0;
}