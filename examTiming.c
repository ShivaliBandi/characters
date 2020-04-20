/*
there are four division A,B,C,D  when user gives an input that is division output should be thier exam time 
ex.
A:7.00am
B:8.30am
C:9.20am
D:10.30am 
***(case insensitive)
input:a
output:7.00AM
input:B
output:FALSE


*/
#include<stdio.h>

void examTime(char ch)
{
  
   point:
    if(ch=='a' || ch=='A' )
       printf("Your exam at 7.00 AM\n");
   else if(ch=='b' || ch=='B' )
       printf("Your exam at 8.30 AM\n");
    else if(ch=='c' || ch=='C' )
       printf("Your exam at 9.20 AM\n");
    else if(ch=='D' || ch=='d' )
       printf("Your exam at 10.30 AM\n");
    else
    {
        
        printf("you have entered wrong division \nplease enter the right one\n");
        getchar();
        scanf("%c",&ch);
        goto point;
    }
    
}
int main()
{
char ch='\0';

printf("enter division of student\n");
scanf("%c",&ch);
examTime(ch);

}