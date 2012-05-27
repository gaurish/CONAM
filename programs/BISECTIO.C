#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double f(double x)
{
 return (pow((double)x,(double)3.0)-2.0*x-5.0);
 }
 void main()
 {
  float x1,x2,epsilon,x3;
  printf("Enter the point of Search interval=");
  scanf("%f",&x1);
  printf("Enter the second point");
  scanf("%f",&x2);
  if((f(x1)*f(x2))>0)
  {
  printf("Initial apporximation are unsuitable");
  exit(1);
  }
  printf("Enterprescribed tolerence");
  scanf("%f",&epsilon);
  do
  {
  x3=(x1+x2)/2;
  if((f(x1)*f(x3))<0)
  x2=x3;
  else
  x1=x3;
  }
  while(fabs((double)(x1-x2))>epsilon);
  printf("\n Approximation=%f",x3);
  getch();
  }