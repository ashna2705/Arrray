#include<stdio.h>
void print_arr(int* a, int length){
    for(int i=0;i<4;i++){
        printf("%d ", *(a+i));
    }
    printf("\nlength: %d ", length);
}
int main(){
    int arr[4]={1,2,3,4};
     print_arr(arr, sizeof(int));
    return 0;
}
