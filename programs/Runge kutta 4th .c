Code:- 
#include<stdio.h>
#include <math.h>
#include<conio.h>
//dy/dx = y � x
#define F(x,y)  (y)-(x)
  void
main () 
{
  double y, x, y1, n, h, f, f1, k1, k2;
  int j;
  clrscr ();
  printf ("\nEnter the value of x0: ");
  scanf ("%lf", &x0);
  printf ("\nEnter the value of y0: ");
  scanf ("%lf", &y0);
  printf ("\nEnter the value of h: ");
  scanf ("%lf", &h);
  printf ("\nEnter the value of last point: ");
  scanf ("%lf", &n);
  x = x1;
  y = y1;
  while (x < xf)
    
    {
      K1 = F (x, y);
      K2 = F ((x + h) \ 2, (y + ((h + k1) / 2)));
      K3 = F ((x + h) \ 2, (y + ((h + k2) / 2)));
      K4 = F ((x + h), (y + h * k3)));
      K = (k1 + 2 * k2 + 2 * k3 + k4);
      Y = y + (h * k);
      X = x + h;
      Printf (�\n in the value of x % f and y is % f �, x, y);
      getch ();
    }
    
