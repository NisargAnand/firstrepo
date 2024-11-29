//Write a program to calculate the trace and the sum of the elements of the seconday diagonal 
#include<stdio.h>
int main ()
{
int Arr[4][4],sum=0,sum1=0;
for (int i=0;i<4;i++)
{
for (int j=0;j<4;j++)
{
scanf("%d",&Arr[i][j]);
printf("%d ",Arr[i][j]);

if (i==j)
{ 
sum=sum+Arr[i][i];
}
if(i+j==3)
{
sum1=sum1+Arr[i][j];
}
}
printf("\n");
}
printf("\n");
printf("trace= %d\n",sum);
printf("the sum of secondary diag is %d\n",sum1);
return 0;
}
