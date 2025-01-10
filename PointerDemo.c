#include<stdio.h>

int main(){

    int arr[] = {10, 20, 30, 40};

    int *ptr = arr;

    printf("Initial Pointer Address: %p, Value: %d\n",
             ptr, *ptr);

    ptr++; 
    printf("After Increment: Address: %p, Value: %d\n",
            ptr, *ptr);

    return 0;
}