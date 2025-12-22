#include <stdio.h>
#include <stdlib.h>

void swapNumbers(int* ptrA, int* ptrB){
    // int temp is a place holder for the value stored in a
    // temp ensures a`s data is not lost when a is converted to b
    int temp = *ptrA;    
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main(){
    int a = 5, b = 6;
    printf("a = %d and b = %d\n", a, b);
    swapNumbers(&a, &b);
    printf("a = %d and b = %d", a, b);
    return 0;
}