#include <stdio.h>
int main() {
    char correctPassword[] = "123456";
    char userInput[50];
    int i, isCorrect = 1;
    printf("Nhap mat khau: ");
    scanf("%s", userInput);
    for (i = 0; correctPassword[i] != '\0' || userInput[i] != '\0'; i++) {
        if (correctPassword[i] != userInput[i]) {
            isCorrect = 0;
            break;
        }
    }
    if (isCorrect) {
        printf("Mat khau dung. Dang nhap thanh cong!\n");
    } else {
        printf("Mat khau sai. Vui long thu lai.\n");
    }
    return 0;
}

