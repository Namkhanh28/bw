#include <stdio.h>
int main() {
    double principal, interest_rate, total_amount, interest;
    int months;
    printf("Nhap so tien gui ban dau (VND): ");
    scanf("%lf", &principal);
    printf("Nhap lai suat hang thang (%%): ");
    scanf("%lf", &interest_rate);
    printf("Nhap so thang gui: ");
    scanf("%d", &months);
    interest_rate = interest_rate / 100;
    total_amount = principal * pow(1 + interest_rate, months);
    interest = total_amount - principal;
    printf("\nTong tien lai sau %d thang: %.2lf VND\n", months, interest);
    printf("Tong tien nhan duoc: %.2lf VND\n", total_amount);
    return 0;
}

