#include <stdio.h>

int main() {
    int so, tongLe = 0;
    printf("Nhap v�o 5 so nguy�n:\n");
    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &so);
        if (so % 2 != 0) {
            tongLe += so; 
        }
    }
    printf("Tong c�c so le l�: %d\n", tongLe);
    return 0;
}
