#include <stdio.h>

int main() {
    int num;
    printf("Cac so Armstrong co 3 chu so la:\n");
    for (num = 100; num <= 999; num++) {
        int hundreds, tens, units;
        int sum;
        hundreds = num / 100;            
        tens = (num / 10) % 10;          
        units = num % 10;               
        sum = (hundreds * hundreds * hundreds) + (tens * tens * tens) + (units * units * units);
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}

