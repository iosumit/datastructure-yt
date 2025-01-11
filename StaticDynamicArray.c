#include<stdio.h>
#include <stdlib.h>

int main(){
    
    int sArr[3] = {1, 2, 3};

    printf("Static Array Addresses:\n");
    for (int i = 0; i < 3; i++) {
        printf("[%d] = %p\n", i, &sArr[i]);
    }

    int *dArr = (int *)malloc(3 * sizeof(int));

    dArr[0] = 10;
    dArr[1] = 20;
    dArr[2] = 30;

    printf("\nDynamic Array Addresses:\n");

    for (int i = 0; i < 3; i++) {
        printf("[%d] = %p\n", i, &dArr[i]);
    }

    free(dArr); 
    return 0;
}