#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_1 = 23, num_2 = 13;
    int *ptr_1, *ptr_2;
    ptr_1 = &num_1;
    ptr_2 = &num_2;
    int sum = *ptr_1 + *ptr_2;
    printf("Sum: %d", sum);
    return 0;
}