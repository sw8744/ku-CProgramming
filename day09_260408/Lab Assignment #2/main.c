#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, result;

    printf("양의 정수를 입력하세요: ");
    scanf("%d", &n);

    while (n) {
        result = n % 10;
        printf("%d", result);
        n /= 10;
    }

    return 0;
}