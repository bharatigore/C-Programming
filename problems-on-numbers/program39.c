
#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum= 0;
    int iOddSum = 0;
    int iDiff = 0;

    while(iNo != 0)
    {
    iDigit=iNo % 10;
{
    if((iDigit % 2  )== 0)
    {
        iEvenSum=iEvenSum + iDigit;
    }
    else
    {
        iOddSum=iOddSum+iDigit;
    }
    iDiff=iEvenSum - iOddSum;
    }

    iNo = iNo / 10;
}
return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}