// .Accept N numbers from user and accept Range, Display all elements
// that Range

#include <stdio.h>
#include <stdlib.h>


void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0; 
    for( iCnt = iLength; iCnt >= 0 ; iCnt --)
    {
       
       if(iStart <= Arr[iCnt] && iEnd >= Arr[iCnt] )
       {
            printf("%d\n",Arr[iCnt]);
          
       }
       
    }

   
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int *p = NULL;

    printf("ENTER Number of Elements : ");
    scanf("%d",&iSize);

    printf("ENTER Starting Point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point \n");
    scanf("%d",&iValue2);

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

    Range(p, iSize,iValue1,iValue2);



    free(p);

    return 0;
    
}