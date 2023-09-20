// . Accept N number from user and return the 
// Display summation of Digits of each number..


#include <stdio.h>
#include <stdlib.h>


int DigitsSum(int Arr[],int iLength)
{
    int iCnt = 0, Sum = 0 , iDigit = 0 , iNo = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt ++)
    {
        iNo = Arr[iCnt];
        while (iNo != 0)
        {
            iDigit = iNo % 10;
            Sum = Sum + iDigit;
            iNo = iNo/10; 
            
        }

       printf("sum of digits of %d is %d\n",Arr[iCnt],Sum);
       Sum = 0;
       

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

    DigitsSum(p, iSize);

    

    

    free(p);

    return 0;
    
}