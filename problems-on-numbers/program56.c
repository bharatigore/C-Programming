//Accept N number from user and return the Smallest number.

#include <stdio.h>
#include <stdlib.h>



int Min(int Arr[],int iLength)
{
    int iCnt = 0, iCompare = Arr[0];

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if((iCompare) > Arr[iCnt])
        {
            iCompare = Arr[iCnt];

            
            
        }
    }

    return iCompare;
   
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

    iRet = Min(p, iSize);

    printf("Smallest number is %d",iRet);

    free(p);

    return 0;
    
}