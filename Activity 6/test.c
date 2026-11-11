#include<stdio.h>

void greet(const char *name){
    printf("\nHello %s this is. world!", name);
}

int main(){
    printf("Hello Bomba!");
    greet("hola");
    return 0;
}