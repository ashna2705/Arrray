#include<stdio.h>
void print_arr(int* a, int length){
    printf("%d ", *a);
}
int main(){
    int arr[4]={1,2,3,4};
    for(int i=0; i<4; i++){
        print_arr(&arr[i], 4);
    }
    return 0;
}


