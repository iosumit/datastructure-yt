#include<stdio.h>

int main(){

    int arr[2][3] = {{1, 2, 3},
                    {4, 5, 6}};

    printf("Base Address: %u", &arr);
    printf("\n%d => %u", arr[0][0], &arr[0][0]);
    printf("\n%d => %u", arr[0][1], &arr[0][1]);
    printf("\n%d => %u", arr[0][2], &arr[0][2]);

    printf("\n%d => %u", arr[1][0], &arr[1][0]);
    printf("\n%d => %u", arr[1][1], &arr[1][1]);
    printf("\n%d => %u", arr[1][2], &arr[1][2]);

    

    // int arr[5] = {1, 2, 3, 4, 5};

    // printf("Base Address: %u", &arr);

    // printf("\n%d => %u", arr[0], &arr[0]);
    // printf("\n%d => %u", arr[1], &arr[1]);
    // printf("\n%d => %u", arr[2], &arr[2]);
    // printf("\n%d => %u", arr[3], &arr[3]);
    // printf("\n%d => %u", arr[4], &arr[4]);

    return 0;
}