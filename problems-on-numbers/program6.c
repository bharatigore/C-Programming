#include<stdio.h>

void Display(int iNo)
{

    while(iNo >  0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("enter number ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}