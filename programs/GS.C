#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
 int i,j,k,n,max;
 float epsilon,reerror,sum,temp,a[5][5],x[5];
 clrscr();
 printf("Enter the number of equation=");
 scanf("%d",&n);
 printf("Enter the value of epsilon");
 scanf("%f",&epsilon);
 printf("enter the max no. of iterations:");
 scanf("%d",&max);
 printf("Enter the co-eficient=");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=(n+1);j++)
  {
   scanf("%f",&a[i][j]);
  }
 }
 for(k=1;k<=max;k++)
 {
  for(i=1;i<=n;i++)
  {
   sum=0;
   for(j=1;j<=n;j++)
   {
    if(i!=j)
    sum=sum+(a[i][j]*x[j]);
   }
   temp=(a[i][n+1]-sum)/a[i][i];
   reerror=(temp-x[i])/temp;
   x[i]=temp;
  }

  if(reerror<=epsilon)
  printf("\nSolution converges in %d iterations", k);
 }
   for(i=1;i<=n;i++)
  printf("%f\n",x[i]);
 getch();
}