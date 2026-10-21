#include <stdio.h>

int main() {
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);

    int tongUoc = 0;

    // V?ng l?p for duy?t các s? t? 1 ð?n N - 1 ð? t?m ý?c
    for (int i = 1; i < N; i++) {
        // N?u N chia h?t cho i th? i là m?t ý?c c?a N
        if (N % i == 0) {
            tongUoc += i; // C?ng i vào t?ng các ý?c
        }
    }

    // Ki?m tra n?u t?ng các ý?c b?ng chính N
    if (tongUoc == N && N > 0) {
        printf("%d la so hoan hao\n", N);
    } else {
        printf("%d khong phai la so hoan hao\n", N);
    }

    return 0;
}
