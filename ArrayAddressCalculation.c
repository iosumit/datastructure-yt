#include<stdio.h>

int main(){

    int arr[2][3] = {{1, 2, 3 },
                     {3, 2, 1}};
                     
    printf("%u\n", &arr[0][0]);
    printf("%u\n", &arr[0][1]);
    printf("%u\n", &arr[0][2]);
    printf("%u\n", &arr[1][0]);
    printf("%u\n", &arr[1][1]);
    printf("%u\n", &arr[1][2]);

    // int arr[5] = {1, 4, 2, 3, 4};

    // printf("%u\n", &arr[0]);
    // printf("%u\n", &arr[1]);
    // printf("%u\n", &arr[2]);
    // printf("%u\n", &arr[3]);
    // printf("%u\n", &arr[4]);
    
    return 0;
}