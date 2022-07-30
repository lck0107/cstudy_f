/*
	1. 반의 학생수 입력받기. (3이상 1000이하)
	2. 몇 반에 속했는지 학생수의 줄, 열(열은 5학년까지이므로 5로 고정)만큼 입력받고 이중배열에 저장. (1~9 정수)
	3. 조건문을 통해 학생마다 비교해서 같은 반 된 적 있을 경우 student[1] ++ 로 추가.
	4. stduent[] 배열 안에 있는 숫자들을 비교하여 가장 높은 갚을 가진 학생 수 출력.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int N, i, j, k, max = 0, president = 1; // 모두다 같은 반이 되지 않았을 경우 1번학생이 반장이므로 president 값을 0으로 하면 오답처리됨.
	int student[1002];
	int tmp[1002][7];
	scanf("%d", &N);

	// 2. 표처럼 반 입력받아서 이중배열에 저장.
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			scanf("%d", &tmp[i][j]);
		}
	}
	
	// 3. 같은 반 된적 있는지 없는지 판단하기. 된 적 있으면 student[i]값 증가.
	for (i = 1; i <= N; i++)
	{
		student[i] = 0;
		for (j = 1; j <= N; j++)
		{
			if (j != i)
			{
				for (k = 1; k <= 5; k++)
				{
					if (tmp[i][k] == tmp[j][k])
					{
						student[i]++;
						break;
					}
				}
			}
		}
	}

	// 4.student[i] 값들을 다 비교해서 가장 높은 값을 가진 학생이 누군지 출력.
	for (i = 1; i <= N; i++)
	{
		if (student[i] > max)
		{
			max = student[i];
			president = i;
		}
	}
	printf("%d", president);
	return 0;
}