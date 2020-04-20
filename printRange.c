#include<stdio.h>
void printRange(char ch)
{
    if(ch>='A' && ch<='Z')
        for(char ccnt=ch;ccnt<='Z';ccnt++)
            printf("%c ",ccnt);
    else if(ch>='a' && ch<='z')
        for(char ccnt=ch;ccnt>='a';ccnt--)
            printf("%c ",ccnt);
    else
    {
        printf("\n");
    }
    
        printf("\n");

}


int main()
{
    char ch='\0';
    printf("enter a character\n");
    scanf("%c",&ch);
    printRange(ch);
    return 0;
}