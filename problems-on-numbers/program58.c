// 4.Accept N number from user and return the 
// all such number which contains 3 digits in it..

#include <stdio.h>
#include <stdlib.h>


void Digits(int Arr[],int iLength)
{
    int iCnt = 0, iDigit = 0;

    while (iCnt < iLength)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d\t",Arr[iCnt]);
        }
        iCnt++;
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

    Digits(p, iSize);

    

    free(p);

    return 0;
    
}