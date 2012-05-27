#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  float x1,x2,x3,t1,t2,fx;
  int a,b,p1,p2,c;
  clrscr();
  printf("\n\nEnter the value of x1 = ");
  scanf("%f",&x1);
  printf("\nEnter the value of x2 = ");
  scanf("%f",&x2);
  printf("\nEnter the value of a = ");
  scanf("%d",&a);
  printf("\nEnter the value of power1 = ");
  scanf("%d",&p1);
  printf("\nEnter the value of b = ");
  scanf("%d",&b);
  printf("\nEnter the value of power2 = ");
  scanf("%d",&p2);
  printf("\nEnter the value of c = ");
  scanf("%d",&c);
  do
  {
	 t1=x1;
	 t2=x2;
	 x3=(x1+x2)/2;
	 fx=(a*(pow(x3,p1)))+(b*(pow(x3,p2)))+(c);
	 if(fx<0)
	 x1=x3;
	 else
	 x2=x3;
  }while((t1!=x1) || (t2!=x2));
  printf("%f\t%f",x1,x2);
  getch();
}

Output :-

Enter the value of x1 =2.625
Enter the value of x2 =2.75
Enter the value of a =1
Enter the value of power1 =3
Enter the value of b =-4
Enter the value of power2 =1
Enter the value of c =-9

2.7065

