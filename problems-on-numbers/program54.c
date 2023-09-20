//5. Accept N numbers from user and return product of
// all odd elments..

#include <stdio.h>
#include <stdlib.h>


int Product(int Arr[],int iLength)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iMult = iMult * Arr[iCnt];
            
        }
    }

    if(iCnt == iLength)
    {
        return 0;
    }
    else
    {
        return iMult;
    }
   
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

    iRet = Product(p, iSize);

    printf("Product is %d",iRet);

    free(p);

    return 0;
    
}