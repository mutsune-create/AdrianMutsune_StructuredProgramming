#include <stdio.h>
#include <stdlib.h>

int main(){
    int count = 10;
    int *pCount;
    pCount = &count;
    *pCount = 24;
    printf("The value of count: %d", count);
    return 0;
}