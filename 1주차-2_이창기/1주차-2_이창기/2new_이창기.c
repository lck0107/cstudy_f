#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j, arr[6][6], arr2[6][6];
	for (i = 1; i <= 5; i++)
	{
		if (i == 1)
		{

		}

		else
		{
			for (j = 1; j <= 5; j++)
			{
				if (j == 1)
				{
					scanf("%d", &arr[i][j]);
					if (arr[i][j] < arr[i - 1][j] && arr[i][j] < arr[i + 1][j] && arr[i][j] < arr[i][j - 1] && arr[i][j] < arr[i][j + 1])
					{
						arr[i][j] = 77;
					}
				}
				else if (j == 5)
				{
					scanf("%d", &arr[i][j]);
					if (arr[i][j] < arr[i + 1][j] && arr[i][j] < arr[i][j - 1] && arr[i][j] < arr[i][j + 1])
					{
						arr[i][j] = 77;
					}
				}
				else
				{
					scanf("%d", &arr[i][j]);
					if (arr[i][j] < arr[i + 1][j] && arr[i][j] < arr[i][j - 1] && arr[i][j] < arr[i][j + 1])
					{
						arr[i][j] = 77;
					}
				}
			}
		}
	}
}

// ���


/*
for (i = 1; i <= 5; i++)
{
	for (j = 1; j = 5; j++)
		printf("%d ", arr[i][j]);		//�� �̷��� �ϸ� �ڲ� 9 9 9 9 ���� �ݺ� ����?
	printf("\n");
}
*/


return 0;
}