#include <stdio.h>
#include <string.h>

int main() {
    char N[100];
    printf("Nhap N: ");
    scanf("%s", N); // Nh?p s? N dý?i d?ng chu?i k? t?

    char maxDigit = N[0]; // Gi? thi?t ch? s? ð?u tiên là l?n nh?t

    // V?ng l?p for duy nh?t duy?t qua t?ng k? t? c?a chu?i N
    for (int i = 1; i < strlen(N); i++) {
        if (N[i] > maxDigit) {
            maxDigit = N[i]; // C?p nh?t ch? s? l?n nh?t
        }
    }

    printf("Chu so lon nhat: %c\n", maxDigit);

    return 0;
}
