#include<stdio.h>
#include<conio.h>
Void
main () 
{
  Float x[10].y[10], sx = 0, s4 = 0, sx2 = 0, sx4 = 0, dnum1, num2;
  Int i, n;
  Printf (enter the limite = );
  Scanf (%d , &n);
  For (i = 1;
	i <= n;
	i++) 
  {
  );
    Scanrf (%f , &x[i]);
  );
    Scanrf (%f , &y[i]);
  }
  For (i = 1;
	i <= n;
	i++) 
  {
    Sx = sx + x[i];
    Sx2 = sx2 + (x[i] * x[i]);
    S4 = s4 + y[i];
    Sxy = sxy + (x[i] * y[i]);
  }
  d = (n * sx2) - (sx * sx);
  num1 = ((n * sxy)  (sx * sy)) / d;
  num2 = ((sy * sx2) - (sx * sxy)) / d;
  printf (\n X - intercept for the line is % f , num2);
  printf (\n Y - intercept for the line is % f , num1);
  getch ();
}


