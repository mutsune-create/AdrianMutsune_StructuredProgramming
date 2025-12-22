#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 15;
    int *ptr;
    ptr = &num;
    printf("Value of num %d\n", num);  
    printf("Value stored in ptr (address of num) %p\n", ptr);
    printf("Address of num %p\n", &num);
    printf("Value accesed uding *ptr (dereferenced value): %d\n", *ptr);
    return 0;
}