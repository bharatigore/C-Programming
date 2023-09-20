#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2); iCnt >= 1 ; iCnt--)       // O(N)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}
