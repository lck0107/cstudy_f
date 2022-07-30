#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, j, k, num1, col, row, arr[40][40];
    int arr2[40], x, y;
    int arr3[40] = { 0 }, max, maxj, maxi;
    scanf("%d%d", &col, &row);
    // 테트리스 형태 입력받아 이중배열에 저장.
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    x = col;
    y = row;

    // 작대기 둘 수 있는지 판별
    for (j = 0; j < col; j++) {
        for (i = 0; i < row; i++) {
            if (i == (row - 1)) {
                arr2[j] = row - 1;
                break;
            }
            if (arr[i][j] == 1) {
                arr2[j] = i;
                break;
            }
        }
    }

    for (int j = 0; j < col; j++) {
        if (arr2[j] >= 4) {
            for (int i = 0; i < row; i++) {
                if (i == row - 1) {
                    num1 = i + 1;
                    break;
                }
                if (arr[i][j] == 1) {
                    num1 = i;
                    break;
                }
            }

            for (int i = num1 - 1; i > num1 - 5; i--) {
                if (arr[i][j] == 0) {
                    arr[i][j] = 1;
                }
            }
            for (int i = num1 - 1; i > num1 - 5; i--) {
                for (k = 0; k < col; k++) {
                    if (arr[i][k] == 1) {
                        max++;
                    }
                }
                if (max == col) {
                    arr3[j]++;
                }
            }

            for (i = num1 - 1; i > num1 - 5; i--) {
                if (arr[i][j] == 1) {
                    arr[i][j] = 0;
                }
            }
        }
    }

    for (j = 0; j < col; j++) {
        if (maxj < arr3[j]) {
            maxj = arr3[j];
            maxi = maxj + 1;
        }
    }

    printf("%d %d", maxi, maxj);
    return 0;
}