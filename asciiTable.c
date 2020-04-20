#include<stdio.h>

int main()
{
    int i;
    i=0;
    printf("decimal|symbol|hexadecimal|octal|\n------------------------------------------------------------------------");
    do
    {
        
        printf("%d | %c | %x | %o | \n",i,i,i,i);
        i++;
    }
    while(i<=127);
    return 0;
}