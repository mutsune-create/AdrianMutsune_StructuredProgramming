#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[1000];
    int length;


    printf("Input your string :");
    fgets(string,sizeof(string),stdin );
    //loop over the string (array)
    while (string[length] != '\0'){
        length = length + 1;
    }

    //subtract the null terminator
    length=length -1;

    printf("%d",length);

    return 0;
}
