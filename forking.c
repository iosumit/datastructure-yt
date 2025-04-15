#include<stdio.h>
#include<unistd.h>

int main(){
    // int a = 0;
    // int x = fork();
    // printf("%d => %p\n", x, &a);
//  -------
    // printf("GATE\n");
    // int pid = fork();
    // if(pid==0){
    //     printf("GO\n");
    // } else {
    //     printf("GOC\n");
    // }
    // printf("IISC\n");
//  -------
    
int a = 50;
int pid = fork();
if(pid == 0){
    a = a+5;
    printf("child %d => %p\n", a, &a);
} else {
    a =  a-5;
    printf("parent %d => %p\n", a, &a);
}


    return 0;
}