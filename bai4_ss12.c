#include<stdio.h>
int array( int sum[],int size){
    int max= sum[0];
    for(int i=0; i<size-1; i++){
        for( int j=1; j< size; j++){
            if(sum[i]<sum[j]){
                max=sum[j];
            }
        }
    }
    return max;
}

int main(void){
    int sum[]={3,2,6,4,12,7,9,1};
    int size = sizeof(sum)/sizeof(sum[0]);
    printf("phan tu lon nhat trong mang la: %d \n", array(sum, size));
    return 0;
}
