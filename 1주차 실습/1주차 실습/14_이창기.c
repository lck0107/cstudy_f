#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) 
{
	int A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, B1, B2, B3, B4, B5, B6, B7, B8, B9, B10;
	int point_A = 0;
	int point_B = 0;
	scanf("%d %d %d %d %d %d %d %d %d %d", &A1, &A2, &A3, &A4, &A5, &A6, &A7, &A8, &A9, &A10);
	scanf("%d %d %d %d %d %d %d %d %d %d", &B1, &B2, &B3, &B4, &B5, &B6, &B7, &B8, &B9, &B10);
	if (A1 > B1)
		point_A++;
	else if (A1 < B1)
		point_B++;
	if (A2 > B2)
		point_A++;
	else if (A2 < B2)
		point_B++;
	if (A3 > B3)
		point_A++;
	else if (A3 < B3)
		point_B++;
	if (A4 > B4)
		point_A++;
	else if (A4 < B4)
		point_B++;
	if (A5 > B5)
		point_A++;
	else if (A5 < B5)
		point_B++;
	if (A6 > B6)
		point_A++;
	else if (A6 < B6)
		point_B++;
	if (A7 > B7)
		point_A++;
	else if (A7 < B7)
		point_B++;
	if (A8 > B8)
		point_A++;
	else if (A8 < B8)
		point_B++;
	if (A9 > B9)
		point_A++;
	else if (A9 < B9)
		point_B++;
	if (A10 > B10)
		point_A++;
	else if (A10 < B10)
		point_B++;
	
	if (point_A > point_B)
		printf("A");
	else if (point_A < point_B)
		printf("B");
	else if (point_A==point_B)
		printf("D");

	return 0;
	
}