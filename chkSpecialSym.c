#include<stdio.h>
void chkSpecialSym(char ch)
{
    if(ch=='|' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='^' || ch=='$' || ch=='*')
        printf("%c is a special symbol \n",ch);
    else
    {
        printf("%c is not a special symbol\n",ch);
    }
    
      

}


int main()
{
    char ch='\0';
    printf("enter a character\n");
    scanf("%c",&ch);
    chkSpecialSym(ch);
    return 0;
}