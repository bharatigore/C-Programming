#include<stdio.h>

void Number(int iNo)
{
   if((iNo < 50) )
    {
        printf("smaller");
    }
    else if((iNo >= 50) )
    {
        printf("medium");
    }

}
int main()
{
    int iValue =0 ;
    printf("enter number");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}