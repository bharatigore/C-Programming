// 2. Accept N numbers from user and 
// Return Difference Between Frequency of even Numbers And Odd Numbers.

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0 , iEvenCount = 0, iOddCount =0, iDiff = 0;

    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
       
       if((Arr[iCnt] % 2) == 0 )
       {
          iEvenCount++;
       }
       else
       {
          iOddCount++;
       }
        
    }
    
    return iDiff=iEvenCount - iOddCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    iRet = Frequency(p, iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
    
}