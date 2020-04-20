#include<stdio.h>
void displayDecHexOct(char ch)
{
    printf("DECIMAL:%d\tHEXADECIMAL:%x\tOCTAL:%o\n",ch,ch,ch);

}

int main()
{
    char ch='\0';
    printf("enter a character\n");
    scanf("%c",&ch);
    displayDecHexOct(ch);
    return 0;
}