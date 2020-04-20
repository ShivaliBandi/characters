/*
if the givin input is capit letter then make it into small 
if its small letter then make it capital letter
input:F
output:f
input:a
output:A
input:*
output:*


*/
#include<stdio.h>

void chkAlpha(char ch)
{
    if(ch>='A' && ch<='Z')  
        printf("%c\n",ch+32);
    else if(ch>='a' && ch<='z')
        printf("%c\n",ch-32);
    else 
        printf("%c\n",ch);
}
int main()
{
char ch='\0';
printf("enter a character");
scanf("%c",&ch);
chkAlpha(ch);


}