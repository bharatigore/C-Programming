#include<stdio.h>

int Factorial(int iNo)
{
   
int iCnt  =1;
     int iMult =1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
         {
            iMult = iMult * iCnt;
            
        }
    }
    return iMult;
}
int  main()
{
    int iValue = 0,iRet= 0;

    printf("enter number ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("factorial of number is %d",iRet);

    return 0;
}