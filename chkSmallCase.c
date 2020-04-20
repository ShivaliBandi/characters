/*
check wheter given input is capital letter  or not
input:a
output:TRUE
input:B
output:FALSE


*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int chkAlpha(char ch)
{
    if((ch>='a' && ch<='z') )
        return TRUE;
    else 
        return FALSE;
}
int main()
{
char ch='\0';
printf("enter a character");
scanf("%c",&ch);
int iret=chkAlpha(ch);
if(iret==TRUE)
    printf("TRUE\n");
else
    printf("FALSE\n");

}