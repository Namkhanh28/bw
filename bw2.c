#include<stdio.h>
int main(){
	int so;
	int demLe=0;
	int demChan=0;
	int i = 1; 
	printf("Nhap vào 5 so nguyên:\n");
    do {
        printf("So thu %d: ", i);
        scanf("%d", &so);

        if (so % 2 == 0) {
            demChan++;
        } else {
            demLe++;
        }

        i++;
    } while (i <= 5);
    printf("So luong so chan: %d\n", demChan);
    printf("So luong so le: %d\n", demLe);
	return 0; 
} 
