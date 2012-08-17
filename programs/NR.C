#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
double
f (double x0) 
{
  return ((pow (x0, 4)) - x0 - 10);
}

double
f1 (double x1) 
{
  return ((4 * pow (x1, 3)) - 1);
}

void
main () 
{
  int i;
  double x0, x1, epsilon, delta, n;
  clrscr ();
  printf ("Enter Initial Approximation: ");
  scanf ("%lf", &x0);
  printf ("Enter Prescribed Tolerance: ");
  scanf ("%lf", &epsilon);
  printf ("Enter n: ");
  scanf ("%lf", &n);
  printf ("Enter delta:");
  scanf ("%lf", &delta);
  for (i = 0; i < n; i++)
    
    {
      if (f1 (x0) <= delta)
	
	{
	  printf ("\nSlope of the function is too small.");
	  exit (1);
	}
      x1 = x0 - (f (x0) / f1 (x0));
      x0 = x1;
    }
  printf ("Approximation: %lf", x1);
  getch ();
}

 
