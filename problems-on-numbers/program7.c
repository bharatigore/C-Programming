#include<stdio.h>

int Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");

    }
    else
    {
        printf(" Demo");
    }
}


int main()
{
    int iValue = 0;

     printf("enter number");
     scanf("%d",&iValue);

     Display(iValue);

     return 0;
}