#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
 double
f (double x) 
{
  return (pow ((double) x, (double) 2.0) + ((double) 3.0 * x) -
	   (double) 5.0);
} void

main () 
{
  double x1, x2, x3 = 0, epsilon, f1, f2, delta;
  clrscr ();
  printf ("Enter the first point of Approximation: ");
  scanf ("%lf", &x1);
  printf ("Enter the second point of Approximation: ");
  scanf ("%lf", &x2);
  printf ("Enter prescribed tolerence: ");
  scanf ("%lf", &epsilon);
  printf ("Enter the permission of lower bound: ");
  scanf ("%lf", &delta);
  
  do
    
    {
      x1 = x2;
      f1 = f (x1);
      x2 = x3;
      f2 = f (x2);
      if (fabs (f2 - f1) <= delta)
	
	{
	  printf ("Slope of function is too small: ");
	  exit (1);
	}
      x3 = ((x1 * f (x2)) - (x2 * f (x1))) / (f (x2) - f (x1));
    }
  while (fabs ((double) (x3 - x2) / x3) > epsilon);
  
  {
    printf ("\nApproximation: %lf", x2);
  } getch ();
}
