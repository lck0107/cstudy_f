/*
	1. �� �������� �� �ޱ� (���� N�� ����)
	2. ���� ����ŭ �ݺ�
		Ʋ���� -> score 1������ �ʱ�ȭ.
		������ -> total ���� score �� ���ϰ�, score ���� 1 ����
*/

#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
int main(void)
{
	int N, num;
	int score = 1, total = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);	//scanf_s ���� �ٽ� �����ϱ�(�ݺ�)
		if (num == 0)
		{
			score = 1;
		}
		else
		{
			total = total + score;
			score++;
		}
	}
	printf("%d", total);

	return 0;
}