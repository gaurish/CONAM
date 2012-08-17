#include<conio.h>
#include<stdio.h>
void
main () 
{
  float x[10], y[10], d[10][10];
  int i, j, n;
  clrscr ();
  printf ("enter the values in x\n");
  for (i = 0; i < 5; i++)
    
    {
      scanf ("%f", &x[i]);
    }
  printf ("enter the values in y\n");
  for (i = 0; i < 5; i++)
    
    {
      scanf ("%f", &y[i]);
    }
  for (j = 1; j <= n - 1; j++)
    
    {
      for (i = j + 1; i <= n; i++)
	
	{
	  if (j == 1)
	    
	    {
	      d[i][j] = y[i] - y[i - 1];
	     }
	  
	  else
	    
	    {
	      d[i][j] = d[i][j - 1] - d[i - 1][j - 1];
	     }
	}
    }
  for (j = 1; j <= n - 1; j++)
    
    {
      for (i = j + 1; i <= n; i++)
	
	{
	  printf ("\n%f", d[i][j]);
	}
    }
  getch ();
}


