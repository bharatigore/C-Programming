
// write a program which accept number from usr and 
//return the count of  digits in between 3 and 7


#include<stdio.h>


int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo !=0)
{
    iDigit = iNo % 10;
    {
    if((iDigit < 7) && (iDigit > 3))
    iCnt++;
    }
    iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;

}