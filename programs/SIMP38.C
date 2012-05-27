#include<stdio.h>
#include<conio.h>
float f(float x)
{
 return 1/(1+(x*x));
}
void main()
{
 int i,n;
 float a,b,h,x,s2,s3,integral,sum;
 clrscr();
 printf("Enter the lower limit=");
 scanf("%f",&a);
 printf("Enter the upper limit=");
 scanf("%f",&b);
 printf("Enter the number of Intervals=");
 scanf("%d",&n);
 h=(b-a)/n;
 sum=f(a)+f(b);
 s2=s3=0;
 for(i=1;i<n;i=i+3)
 {
  x=a+i*h;
  s3=s3+f(x)+f(x+h);
 }
 for(i=3;i<n;i=i+3)
 {
  x=a+i*h;
  s2=s2+f(x);
 }
 integral=(3*h/8)*(sum+2*s2+3*s3);
 printf("Value of Integral=%f",integral);
 getch();
}
