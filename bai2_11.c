#include<stdio.h>
int arr( int arr[],int size){
    for(int i=0; i< size; i++){
        printf(" %d ", arr[i]);
    }
    return 0;
}
int main(void){
    int num[]={1,2,3,4,5};
    arr(num,5);
    return 0;
}
