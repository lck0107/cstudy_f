#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[100005];
int num;
int arr2[100005];
int mid;

int Bsearch(int first, int last, int target) {
	mid = (first + last) / 2;
	if (first <= last) {
		if (target == arr[mid])	return 1;
		else if (target > arr[mid]) {
			Bsearch(mid + 1, last, target);
		}
		else if (target < arr[mid]) {
			Bsearch(first, mid - 1, target);
		}
	}
	else
	{
		return -1;
	}
}

int main(void) {
	int n, q;
	scanf("%d %d", &n, &q);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < q; i++) {
		scanf("%d", &num);
		arr2[i] = Bsearch( 0, n - 1, num);
	}
	for (int j = 0; j < n; j++) {
		if (arr2[j] == 1)	printf("YES\n");
		else if (arr2[j] == -1)	printf("NO\n");
	}

	return 0;
}