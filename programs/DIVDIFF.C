#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void
main () 
{
  float x[10], y[10], d[10][10], a, sum, prod;
  int i, j, k, n;
  clrscr ();
  printf ("Enter the number of table points =");
  scanf ("%d", &n);
  printf ("Enter the %d vales for (x,y)\n", n);
  for (i = 1; i <= n; i++)
    
    {
      scanf ("%f%f", &x[i], &y[i]);
    }
  printf ("Enter the value of Interpolation=");
  scanf ("%f", &a);
  if ((a < x[1]) && (a > x[n]))
    
    {
      printf ("value lies outside range");
      exit (1);
    }
  i = 2;
  while (a > x[i])
    
    {
      i++;
    }
  k = i - 1;
  for (j = 1; j < n; j++)
    
    {
      for (i = 1; i <= (n - j); i++)
	
	{
	  if (j == 1)
	    
	    {
	      d[i][j] = (y[i + 1] - y[i]) / (x[i + 1] - x[i]);
	    }
	  
	  else
	    
	    {
	      d[i][j] = (d[i + 1][j - 1] - d[i][j - 1]) / (x[i + j] - x[i]);
	    }
	}
    }
  sum = y[k];
  for (i = 1; i <= (n - k); i++)
    
    {
      prod = 1;
      for (j = 1; j <= (i - 1); j++)
	
	{
	  prod = prod * (a - x[k + j]);
	}
      sum = sum + d[k][i] * prod;
    }
  printf ("\nInterpolation value=%f", sum);
  getch ();
}
