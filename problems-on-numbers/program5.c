
#include<stdio.h>
void Display(int iNo)
{
   int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)       // O(N)
    
        
        {
            printf("*");
        }
    
}
int main()
{
    int iValue = 0;
    printf("enter number ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}