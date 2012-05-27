#include <stdio.h>
#include <conio.h>
#include <math.h>
#define maxn 100
#define order 4
void main()
{
float ax[maxn+1],ay[maxn+1],diff[maxn+1]
[order+1],nr=1,dr=1,x,p,h,yp;
int n,i,j,k;
clrscr();
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the values in form x,y\n");
for(i=1;i<=n;i++)
{
scanf("%f%f",&ax[i],&ay[i]);
}
printf("enter the value of x for which value of y is wanted\n");
scanf("%f",&x);
h=ax[2]-ax[1];
for(i=n;i>=1;i--)
{diff[i][1]=ay[i]-ay[i-1];}
for(j=2;j<=order;j++)
{
for(i=n;i>j;i--)
{diff[i][j]=diff[i][j-1]-diff[i-1][j-1];}
}
i=n;
p=(x-ax[i])/h;
yp=ay[i];
for(k=1;k<=order;k++)
{
nr*=p+k-1;
dr*=k;
yp+=(nr/dr)*diff[i][k];
}
printf("when x =%f\t y= %f",x,yp);
getch();
}
