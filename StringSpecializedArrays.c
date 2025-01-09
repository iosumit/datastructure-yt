#include<stdio.h>

int main() {

    char str[] = "Hello";

    for (int i = 0; str[i] != '\0'; i++) {

        printf("Character: %c, Address: %p\n",
                         str[i], &str[i]);

    }
    
    printf("Null terminator (\\0) Address: %p\n", 
                        &str[5]);

}