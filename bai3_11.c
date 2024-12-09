#include<stdio.h>
int factorinal(int number){
    int factorinal=1;
    for(int i=1; i<= number; i++ ){
        factorinal*=i;
    }
    return factorinal;
}
int main(void){
    int number;
    printf("Moi ban nhap 1 so nguyen bat ky: ");
    scanf("%d", &number);
    printf("Giai thua cua %d la: %d \n", number, factorinal(number));
    return 0;
}
