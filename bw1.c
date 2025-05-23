#include <stdio.h>

int main() {
    int so, tongLe = 0;
    printf("Nhap vào 5 so nguyên:\n");
    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &so);
        if (so % 2 != 0) {
            tongLe += so; 
        }
    }
    printf("Tong các so le là: %d\n", tongLe);
    return 0;
}
