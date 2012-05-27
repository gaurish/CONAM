#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double f(double x)
{
 return (pow((double)x,(double)4.0)-x-10.0);
 }
 void main()
 {
  float x1,x2,epsilon,x3=0,x3p,f1,f2,f3,delta;
  clrscr();
  printf("Enter the first point of Approximation=");
  scanf("%f",&x1);
  printf("Enter the second point of approximation=");
  scanf("%f",&x2);
  f1=f(x1);
  f2=f(x2);
  if((f1*f2)>0)
  {
  printf("Initial apporximation are unsuitable");
  exit(1);
  }
  printf("Enterprescribed tolerence");
  scanf("%f",&epsilon);
  printf("Enter the permission of lower bound=");
  scanf("%f",&delta);
  do
  {
  if(fabs(f2-f1)<=delta)
  {
   printf("Slope of function is too small");
   exit(1);
   }
   x3p=x3;
   x3=(x1*f2-x2*f1)/(f2-f1);
   f3=f(x3);
   if((f1*f3)<0)
   {
    x2=x3;
    f2=f3;
   }
   else
   {
    x1=x3;
    f1=f3;
    }
  }
  while(fabs((double)(x3-x3p)/x3)>epsilon);
  {
   printf("\n Approximation=%f",x3);
  }
  getch();
 }