#include<stdio.h>
#include<conio.h>
#include<math.h>
float
f (float x) 
{
  return (sqrt (1 + x * x * x));
}

void
main () 
{
  int i, n;
  float a, b, h, x, s2, s4, sum, integral;
  clrscr ();
  printf ("Enter the lower limit of integration : ");
  scanf ("%f", &a);
  printf ("Enter the upper limit of integration : ");
  scanf ("%f", &b);
  printf ("Enter the number of intervals=");
  scanf ("%d", &n);
  h = (b - a) / n;
  sum = f (a) + f (b);
  s2 = s4 = 0;
  for (i = 1; i < n; i = i + 2)
    
    {
      x = a + i * h;
      s4 = s4 + f (x);
    }
  for (i = 2; i < n; i = i + 2)
    
    {
      x = a + i * h;
      s2 = s2 + f (x);
    }
  integral = (h / 3) * (sum + 2 * s2 + 4 * s4);
  printf ("Value of the Integral=%f", integral);
  getch ();
}


