#include <stdio.h>
int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("So 0 khong co uoc nao.\n");
        return 0;
    }
    if (n < 0) {
        n = -n;
    }
    printf("Cac uoc cua so la: ");
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

