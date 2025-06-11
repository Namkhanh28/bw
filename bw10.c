#include <stdio.h>
int main() {
    int n, i, count = 0;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d khong phai la so nguyen to.\n", n);
        return 0;
    }
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++; 
        }
    }
    if (count == 2) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }
    return 0;
}

