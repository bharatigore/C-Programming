#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt = (iNo / 2); iCnt++)
    {
        if((iCnt % 2) ==0)
        {
            printf("%d",iCnt);
        }
    }
}
int  main()
{
    int iValue = 0,iRet= 0;

    printf("enter number");
    scanf("%d",iValue);

    iRet = Factorial(iValue);

    printf("factorial of number is %d",iRet);

    return 0;
}