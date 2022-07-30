#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
    int N, i, j, k, x, y, w, h;
    int arr[200][200] = { 0 }, arr2[102] = { 0 };

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d%d%d%d", &x, &y, &w, &h);

        for (j = x; j < x + w; j++) {
            for (k = y; k < y + h; k++) {
                arr[j][k] = i + 1;
            }
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < 101; j++) {
            for (k = 0; k < 101; k++) {
                if (arr[j][k] == i + 1)  arr2[i]++;
            }
        }
        printf("%d\n", arr2[i]);
    }

    return 0;
}