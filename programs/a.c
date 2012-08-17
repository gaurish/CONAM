#include<stdio.h.
#include<conio.h.
#include<math.h.
Void
main () 
{
  Float x[10], d[10], d1 = 0, d2 = 0, s, t, m, sum = 0, x1 = 0, r;
  Int i, j, n, mn;
  Prtintf ("\n Enter the value of m");
  Scanf ("%d", &m);
  Prtintf ("\n Enter the value of n");
  Scanf ("%d", &n);
  Prtintf ("\n Enter the value of x");
  For (i = 1;
	I, = n;
	i++) 
  {
    Scanf ("%d", &x[i]);
  }
  For (i = 1;
	I, = n;
	i++) 
  {
    Sum = sum + x[i];
  }
  Mn = sum / n  Printf ("\n the mean is %d", mn);
  Printf ("d is folloes \n");
  For (i = 1;
	i <= n;
	i++) [D2[i] = d[i] * d[i];
	       Sum = sum + d2[i];
	       Printf ("\n %f", d2[i]);
	       }

	       Printf ("\n d2 is %f", sum);
	       For (i = 1;
		     i <= n;
		     i++) 
	       {
	       D1 = d1 + d[j];
	       }

	       D1 = d1 / n;
	       Printf ("\n d1 is %f", d1);
	       For (i = 1;
		     i <= n;
		     i++) 
	       {
	       x1 = x1 + x[j];
	       }

	       X[j] = x1 / n;
	       Printf ("\n x1 is %f", x1);
	       S = sqrt ((sum - (n * (d1 * d1))) / (n - 1)) 
	       Printf ("\n the value of s is %f", s);
	       R = sqrt (n);
	       T = ((x1 - m) / (s / r));
	       Printf ("\n the t-test result is %f", t);
	       Getch ();
	       }

 Output:     Enter the value of m 4 
	       Enter the for limit 5 
	       Enter the value for x 2 
	       6 
	       4 
	       3 
	       1 
	       The mean is 3 
	       D is as follows 
	       -1 
	       3 
	       1 
	       0 
	       -2 
	       D2 is as follows 
	       1 
	       9 
	       1 
	       0 
	       4 
	       D2 is 15.000 
	       D1 is 0.2 
	       X1 is 0.3 
	       The value is 1.92353  The t - test result is - 0.9299981   
