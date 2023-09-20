
//write a program which accept number from user and count 
//frequencyog 4 in it

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;

    }
    while(iNo != 0){
    iDigit = iNo % 10;
    {
        if(iDigit == 4)
        iCnt++;
    }
    iNo = iNo / 10;
    }
    return iCnt;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}