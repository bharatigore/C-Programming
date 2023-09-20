#include<stdio.h>

void Pattern(int iNo)
{int iCnt = 0;
for(iCnt =1; iCnt <=iNo; iCnt++)
{
    printf( " $  * ");
}

}
int main()
{
    int iValue = 0;
    printf("enter number ");
    scanf("%d",&iValue);

    Pattern (iValue);
    return 0;
}