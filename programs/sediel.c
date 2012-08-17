#include<stdio.h>
#include<conio.h>
#include<math.h>
void
main () 
{
  float a[5][5], x[5], epsilon, sum, relerror, temp;
  int n, max, i, j, k;
  clrscr ();
   printf ("Enter no. of equations:");
  scanf ("%d", &n);
  printf ("enter the max no. of iterations:");
  scanf ("%d", &max);
  printf ("Enter the epsilon:");
  scanf ("%f", &epsilon);
  printf ("Enter the elements of matrix:");
  for (i = 1; i <= n; i++)
    
    {
      for (j = 1; j <= (n + 1); j++)
	
	{
	  scanf ("%f", &a[i][j]);
	}
    }
  for (k = 1; k <= max; k++)
    
    {
      for (i = 1; i <= n; i++)
	
	{
	  sum = 0;
	  for (j = 1; j <= n; j++)
	    
	    {
	      if (i != j)
		sum = sum + (a[i][j] * x[j]);
	    }
	  temp = (a[i][n + 1] - sum) / a[i][i];
	  relerror = (temp - x[i]) / temp;
	  x[i] = temp;
	}
       if (relerror <= epsilon)
	printf ("\nSolution converges in %d iterations", k);
    }
  for (i = 1; i <= n; i++)
    printf ("\n%f", x[i]);
  getch ();
}
