#include<stdio.h>
#include<conio.h>
void
main () 
{
  float x[10], y[10], sum = 0, prod;
  int i, j, n, a;
  clrscr ();
  printf ("Enter the value of Table points=");
  scanf ("%d", &n);
  printf ("Enter the value of x,y=");
  for (i = 0; i < n; i++)
    
    {
      scanf ("%f%f", &x[i], &y[i]);
    }
  printf ("Enter the value of a at which interpolation will calculate=");
  scanf ("%d", &a);
  for (i = 0; i < n; i++)
    
    {
      prod = 1;
      for (j = 0; j < n; j++)
	
	{
	  if (i != j)
	    
	    {
	      prod = prod * ((a - x[j]) / (x[i] - x[j]));
	    }
	}
      sum = sum + (prod * y[i]);
    }
  printf ("Interpolation is=%f", sum);
  getch ();
}
