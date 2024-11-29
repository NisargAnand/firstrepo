// Write a C program that takes two 2D arrays (matrices) of the same dimensions and prints sum.
// Each element in the result should be the sum of the corresponding elements from the two matrices.
#include<stdio.h> 
int main ()
{   int i,j;
    printf("enter the no of rows and columns of matrix\n");
    scanf("%d %d",&i,&j);
    int Arr[i][j],Arr1[i][j],sumArr[i][j];
    printf("enter the elements of the matrices\n");
    for (int temp=0; temp<i;temp++){
        for (int temp1=0;temp1<j;temp1++)
        {
            scanf("%d",&Arr[temp][temp1]);
        }
        
    }
    printf("Enter the elements of second matrix\n");
 for (int temp=0; temp<i;temp++){
        for (int temp1=0;temp1<j;temp1++)
        {
            scanf("%d",&Arr1[temp][temp1]);
        }
        
    }
    printf("the sum of the two matrix is\n");
    for (int temp=0; temp<i;temp++){
        for (int temp1=0;temp1<j;temp1++)
        {
          sumArr[temp][temp1]=Arr[temp][temp1]+Arr1[temp][temp1];
          printf("%d ",sumArr[temp][temp1]);
        }
    }
 return 0;
}