#include<stdio.h>

float Percentage(float fNo1, float fNo2 )
{
    float fPer = 0;
    {
        fPer = ((fNo2/fNo1) * 100.0);
    }
    return fPer;

}
int main()
{
    int iValue1 =0,iValue2;
    float fRet =0.0;


    printf("please enter total marks ");
    scanf("%d",&iValue1);
    printf("please enter obtained marks");
    scanf("%d",&iValue2);
    fRet = Percentage(iValue1,iValue2);
    printf("percentage is  %f",fRet);
    return 0;
}