// 3. Accept N numbers from user and 
// Check whether that numbers contain 11 is or not

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[],int iLength)
{
    int iCnt = 0 ; BOOL bFlag = FALSE;
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
       
       if (((Arr[iCnt] ) == 11) )
       {
          bFlag = TRUE;
          break;
       }
      
    }
    
    return bFlag;
}

int main()
{
    int iSize = 0,  iCnt = 0;
    BOOL bRet = FALSE ;
    int *p = NULL;

    printf("ENTER Number of Elements : ");
    scanf("%d",&iSize);

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

    bRet = Check(p, iSize);

    if (bRet == TRUE)
    {
        printf(" 11 is present ");
    }
    else
    {
        printf("  11 is absent ");
    }

    

    free(p);

    return 0;
    
}