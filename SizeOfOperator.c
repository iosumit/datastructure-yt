#include<stdio.h>

int main(){

    int arr[5] = {10, 20, 30, 40, 50};

    printf("\narr =>  %u", sizeof(arr));

    printf("\narr[0] =>  %u", sizeof(arr[0]));
    
    printf("\nNum =>  %u\n", 
            sizeof(arr) / sizeof(arr[0]));

    return 0;
}