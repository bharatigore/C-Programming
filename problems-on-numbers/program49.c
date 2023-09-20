// 5. Accept N numbers from user and accept one another number as NO , 
// return Frequency of No FRom it.

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt = 0 , iCount = 0;
    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
       
       if((Arr[iCnt] ) == iNo )
       {
          iCount++;
       }
      
    }
    
    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int iValue = 0;
    int *p = NULL;

    printf("ENTER Number of Elements : ");
    scanf("%d",&iSize);

    printf("ENTER Number for Count Frequency : ");
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

    iRet = Frequency(p, iSize,iValue);

    printf("Result is %d",iRet);

    free(p);

    return 0;
    
}