#include <stdio.h>
#include <stdlib.h>

void pass_by_value(int c){
    c = c + 50;
}
void pass_by_reference(int *c){
    *c = *c + 90;
}

int main(){
    int b = 25;
    printf("Original value: %d\n", b);
    pass_by_value(b);
    printf("Pass by value: %d\n", b);
    pass_by_reference(&b);
    printf("Pass by reference: %d", b);
    return 0;
}