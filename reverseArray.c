#include <stdio.h>

int* print_arr(int* a, int length){
    int new_arr[length];
    int* p = &new_arr[0];
    for(int k = 0; k<length; k++) {
        new_arr[k] = *(a + (length - k - 1));
    }
    return p;
}

int main(){
    int arr[4]={1,2,3,4};
    int length = sizeof(arr)/sizeof(int);
    
    int* reverse_array_pointer = print_arr(&arr[0], length);
    
    for(int i=0;i<length; i++){
        printf("%d", *(reverse_array_pointer + i));
    }
    return 0;
}
