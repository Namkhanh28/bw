#include <stdio.h>
int main() {
    int year, month;
    int days;
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang (1-12): ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Thang khong hop le!\n");
        return 0;
    }
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            days = 29;
        else
            days = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }
    printf("Thang %d nam %d co %d ngay.\n", month, year, days);
    return 0;
}

