#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
    int i, j, n, s, b, s1, b1, num, num1, num2, num3, i1, i2, i3;
    int arr[1002] = { 0 }, result = 0;
    scanf("%d", &n);

    for (i = 111; i < 1000; i++) {
        i1 = i % 10;
        i2 = (i / 10) % 10;
        i3 = (i / 100) % 10;
        if (i1 * i2 * i3 == 0 || i1 == i2 || i2 == i3 || i1 == i3) {
            arr[i] = -1;
        }
    }
    for (j = 0; j < n; j++) {
        scanf("%d%d%d", &num, &s, &b);
        num1 = num % 10;
        num2 = (num / 10) % 10;
        num3 = (num / 100) % 10;
        for (i = 111; i < 1000; i++) {
            s1 = 0;
            b1 = 0;
            i1 = i % 10;
            i2 = (i / 10) % 10;
            i3 = (i / 100) % 10;
            if (i1 == num1)  s1++;
            else if (i1 == num2 || i1 == num3)  b1++;
            if (i2 == num2)  s1++;
            else if (i2 == num1 || i2 == num3)  b1++;
            if (i3 == num3)  s1++;
            else if (i3 == num1 || i3 == num2)  b1++;
            if (s != s1 || b != b1)  arr[i] = -1;
        }
    }

    for (i = 111; i < 1000; i++) {
        if (arr[i] == 0)  result++;
    }
    printf("%d", result);
    return 0;
}