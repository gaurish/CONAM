#include<stdio.h>
#include<conio.h>
void
main () 
{
  float x[20], y[20], d[20][20];
  int n, i, j;
  clrscr ();
  printf ("\tenter the size of an arrya:");
  scanf ("%d", &n);
  printf ("\tenter the element in the x array:-\n");
  for (j = 1; j <= n; j++)
    
    {
      scanf ("%f", &x[j]);
    }
  printf ("\tenter the element in the y array:-\n");
  for (i = 1; i <= n; i++)
    
    {
      scanf ("%f", &y[i]);
    }
  for (j = 1; j <= n - 1; j++)
    
    {
      for (i = 1; i <= n - j; i++)
	
	{
	  if (j == 1)
	    
	    {
	      d[i][j] = ((y[i + 1] - y[i]) / (x[i + 1] - x[i]));
	    }
	  
	  else
	    d[i][j] = ((d[i + 1][j - 1] - d[i][j - 1]) / (x[i + j] - x[i]));
	}
    }
    printf ("\tThe resultant poninomial is:\n");
  for (j = 1; j <= n - 1; j++)
    
    {
      for (i = 1; i <= n - j; i++)
	
	{
	  printf ("\t%f    ", d[j][i]);
	}
      printf ("\n");
    }
  getch ();
}


