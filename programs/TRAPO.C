#include<stdio.h>
#include<conio.h>
void
main () 
{
  int i, n;
  float x[20], y[20], h, integral, sum;
  clrscr ();
  printf ("enter the number of integrals=");
  scanf ("%d", &n);
  printf ("enter the size of integral=");
  scanf ("%f", &h);
  printf ("enter %d pair of (x,y) \n", n + 1);
  for (i = 1; i <= (n + 1); i++)
    
    {
      scanf ("%f%f", &x[i], &y[i]);
    }
  sum = (y[1] + y[n + 1]) / 2;
  for (i = 2; i <= n; i++)
    
    {
      sum = sum + y[i];
    }
  integral = h * sum;
  printf ("Integral = %f", integral);
  getch ();
}
