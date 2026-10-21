#include <stdio.h>

int main() {
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);

    int tong = 0;
    int soLuong = 0;

    // Duy?t t?ng s? t? 1 ð?n N
    for (int i = 1; i <= N; i++) {
        // Ki?m tra xem i có chia h?t cho 3 không (ph?n dý b?ng 0)
        if (i % 3 == 0) {
            tong += i;       // C?ng s? i vào t?ng
            soLuong++;       // Tãng s? lý?ng lên 1
        }
    }

    printf("Tong = %d\n", tong);
    printf("So luong = %d\n", soLuong);

    return 0;
}
