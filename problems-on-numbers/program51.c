// 2. Accept N numbers from user and accept one another number as NO , 
// return index of first occurrence of that NO
#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0 , iIndex = 0;
    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
       
       if((Arr[iCnt] ) == iNo )
       {
          break;
       }
       
    }

    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
    
   
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int iValue = 0;
    int *p = NULL;

    printf("ENTER Number of Elements : ");
    scanf("%d",&iSize);

    printf("ENTER Number for Search : ");
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

    iRet = FirstOcc(p, iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurrence of number is %d",iRet);
    }
    

    free(p);

    return 0;
    
}