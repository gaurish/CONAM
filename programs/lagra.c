Code:- 
#include<stdio.h>
#include<conio.h>
  void
main () 
{
  int n, i, j;
  float x[20], y[20], X, product;
  float sum = 0;
  clrscr ();
  printf ("\n\n");
  printf ("How many numbers you want to enter for x  : ");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    
    {
      printf ("\nEnter value for x(%d)  : ", i);
      scanf ("%f", &x[i]);
      printf ("\nEnter value for y(%d)  : ", i);
      scanf ("%f", &y[i]);
    }
  printf ("\nEnter any value of y for which you want to find x : ");
  scanf ("%f", &X);
  for (i = 0; i < n; i++)
    
    {
      product = 1;
      for (j = 0; j < n; j++)
	
	{
	  if (i != j)
	    
	    {
	      product = product * (X - x[j]) / (x[i] - x[j]);
	    }
	}
      sum = sum + y[i] * product;
    }
  printf ("LAGRANGE'S INTERPOLATION METHOD  ");
  printf ("\n\n");
  printf ("Interpolated value is  :   %.4f  ", sum);
  getch ();
}

 Output:- How many numbers you want to enter for x
:4  Enter value for x
  (0):0  Enter value for y
    (0):0  Enter value for x
      (1):1  Enter value for y
	(1):2  Enter value for x
	  (2):2  Enter value for y
	    (2):8  Enter value for x
	      (3):3  Enter value for x
		(3):27  Enter any value of y for which
		  you want to find x:2.5 
		      LAGRANGE
		      'S INTERPOLATION METHOD  

Interpolated value is  :   15.313


