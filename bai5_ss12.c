#include<stdio.h>
int prime(int number){
    int count=0;
    for(int i=1; i<=number; i++){
        if(number % i ==0){
            count ++;
        }
    }
    if(count ==2){
        printf("True\n");
    }else{
        printf("False\n");
    }
    return 0;
}
int main(void){
    int number1, number2;
    printf("moi ban nhap vao so thu nhat: ");
    scanf("%d", &number1);
    prime(number1);
    printf("moi ban nhap vao so thu hai: ");
    scanf("%d", &number2);
    prime(number2);
    return 0;
}
