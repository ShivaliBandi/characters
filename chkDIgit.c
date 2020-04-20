/*
check wheter given input is digit  or not
input:F
output:FALSE
input:9
output:TRUE


*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int chkAlpha(char ch)
{
    if((ch>='0' && ch<='9') )
        return TRUE;
    else 
        return FALSE;
}
int main()
{
char ch='\0';
printf("enter a character\n");
scanf("%c",&ch);
int iret=chkAlpha(ch);
if(iret==TRUE)
    printf("TRUE\n");
else
    printf("FALSE\n");

}