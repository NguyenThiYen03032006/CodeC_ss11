#include<stdio.h>
int perfect_number(int number){
    int sum=0;
    for(int i=1; i<=number/2; i++){
        if(number % i == 0){
            sum+=i;
        }
    }
    if(sum == number){
        printf("True\n");
    }else{
        printf("False\n");
    }
    return 0;
}
int main(void){
    int number1, number2;
    printf("Moi ban nhap so nguyen duong bat ky thu nhat: ");
    scanf("%d", &number1);
    perfect_number(number1);
    printf("Moi ban nhap so nguyen duong bat ky thu hai: ");
    scanf("%d", &number2);
    perfect_number(number2);
    return 0;
}
