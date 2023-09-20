// 1. Accept N numbers from user and accept one another number as NO , 
// check whether NO is present or not.

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[],int iLength, int iNo)
{
    int iCnt = 0 ;
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
       
       if (((Arr[iCnt] ) == iNo) )
       {
          break;;
       }
      
    }

    if(iCnt == iLength)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
    
    
}

int main()
{
    int iSize = 0,  iCnt = 0;
    int iValue = 0;
    BOOL bRet = FALSE ;
    int *p = NULL;

    printf("ENTER Number of Elements : ");
    scanf("%d",&iSize);

    printf("ENTER Number for search : ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory !!!");
        return -1;
    } 

    printf("ENTER The %d Elements \n",iSize);

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d Elements :  \n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize,iValue);

    if (bRet == TRUE)
    {
        printf(" Number is present ");
    }
    else
    {
        printf("  Number is absent ");
    }

    

    free(p);

    return 0;
    
}