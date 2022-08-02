#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//얘도 3번처럼 새로운 인자 추가하면 시간 제한 줄일 수 있음.
//인줄 알았는데 2개인데 반복문써서 시간제한 떴던 거였음.(arr[depth]=1 ~ DFS(depth+1,cnt) 까지)
char inequal[11];
int makeNum[11];
int check[11];
int n;
long long min_result = 9999999999;
long long max_result = 0;

void check_can() {
    long long temp = 0;
    long long ten = 1;

    for (int i = 0; i < n; i++) {
        if (inequal[i] == '<') {
            if (makeNum[i] > makeNum[i + 1])
                return;
        }
        else if (inequal[i] == '>') {
            if (makeNum[i] < makeNum[i + 1])
                return;
        }
    }
    for (int i = n; i >= 0; i--) {
        //printf("%lld\n", temp);
        temp += ten * makeNum[i];
        ten *= 10;
    }
    if (temp > max_result)
        max_result = temp;
    if (temp < min_result)
        min_result = temp;
}

void dfs(int cnt) {
    if (cnt == n + 1) {
        check_can();
        return;
    }
    for (int i = 0; i < 10; i++) {
        if (check[i])
            continue;
        check[i] = 1;
        makeNum[cnt] = i;
        dfs(cnt + 1);
        check[i] = 0;
    }
}

int main(void) {
    long long ten;

    scanf("%d", &n);
    //getchar();

    for (int i = 0; i < n; i++) {

        getchar();
        scanf("%c", &inequal[i]);

    }


    for (int i = 0; i < 10; i++) {
        makeNum[0] = i;
        check[i] = 1;
        dfs(1);
        check[i] = 0;
    }

    ten = pow(10, n);

    if (max_result < ten)
        printf("0%lld\n", max_result);
    else
        printf("%lld\n", max_result);

    if (min_result < ten)
        printf("0%lld\n", min_result);
    else
        printf("%lld\n", min_result);
}