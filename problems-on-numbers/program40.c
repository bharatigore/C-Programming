// 1. Accept N numbers from user and return difference between summation of even elements and summetion of odd  elements.

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0;
    
    for(iCnt = 0; iCnt < iLength ;  iCnt++)
    {
        if((Arr[iCnt] % 2) == 0 )
        {
            iEvenSum = iEvenSum +  Arr[iCnt];

        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }

    return iDiff=(iEvenSum - iOddSum);

}

int main()
{
    int iSize = 0, iCnt = 0 , iRet = 0;

    int *p = NULL;

    printf("Enter Number Of elments ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d Elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        printf("Enter element %d : \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Result is %d ",iRet);

    free(p);

    return 0;
}