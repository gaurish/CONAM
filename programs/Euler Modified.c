Code:- 
#include<stdio.h>
#include <math.h>
#include<conio.h>
#define F(x,y)  (x)*(y)
  void
main () 
{
  double y1, y, x, x1, a, n, h;
  clrscr ();
  printf ("\nEnter the value of range: ");
  scanf ("%lf", &n);
  printf ("\nEnter the value of x: ");
  scanf ("%lf", &x);
  printf ("\nEnter the value of y: ");
  scanf ("%lf", &y);
  printf ("\n\nEnter the h: ");
  scanf ("%lf", &h);
  x = x1;
  y = y1;
  while (x < n)
    
    {
      Y2 = y + h * F (x, y);
      t = f ((x + h), y2);
      r = F (x, y);
      y2 = y + (h \ 2) * y (r + t);
      y = y2;
      x = x + h;
    printf (“the value of x ix % f and y % f ”, x, y), }
  getch ();
}


