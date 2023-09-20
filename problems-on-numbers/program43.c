// . Accept N numbers from user and 
// Display all such elements which areb divisible 3 & 5.

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
       
       if (((Arr[iCnt] % 3) == 0) && ((Arr[iCnt] % 5) == 0))
       {
          printf("\n\n%d",Arr[iCnt]);
       }
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

    Display(p, iSize);

    free(p);

    return 0;
    
}