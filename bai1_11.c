#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(void){
    int number1, number2, sum1;
    printf("nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("nhap so thu hai: ");
    scanf("%d", &number2);
    sum1 = sum(number1, number2);
    printf("Tong cua %d va %d la: %d \n", number1, number2, sum1);
    
    return 0;
}
