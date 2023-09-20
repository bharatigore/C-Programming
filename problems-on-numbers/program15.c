#include<stdio.h>
typedef int BOOL;

#define TRUE 1;
#define FALSE 0;

BOOL ChkGreater()
{
    int iNo =0;

    if(iNo >100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    

}

int main()
    {
        int iValue =0;

        BOOL bRet = FALSE;
        printf("please enter number");

        scanf("%d",&iValue);
        bRet= ChkGreater(iValue);
        if( bRet > 100 )
        {
            printf("greater");
        }
        else
        {
            printf("Smaller");

        }
        return 0;

    }
