#include<stdio.h>

int MultiFact(int iNo)
{
     int iCnt  =1;
     int iMult =1;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
            
        }
    }
    return iMult;

}
int main()

{
    int iValue = 0;
    int iRet = 0;
    printf("enter number ");
    scanf("%d",&iValue);
    iRet = MultiFact (iValue);
    printf("%d",iRet);
    return 0;
}