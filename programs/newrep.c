Code:- 
#include<stdio.h>
#include<conio.h>
#include<math.h>
  void
main () 
{
  float x1, x0, fx0, f1x, temp = 1.00;
  int a, p1, p2, b;
  printf ("Enter the value x0: ");
  scanf ("%f", &x0);
  printf ("Enter the power: ");
  scanf ("%d", &p1);
  printf ("Enter the Value of a: ");
  scanf ("%d", &a);
  printf ("Enter the Value of b: ");
  scanf ("%d", &b);
  p2 = p1 - 1;
  while (x1 != temp)
    
    {
      temp = x0;
      fx0 = pow (x0, p1) + (a * x0) + b;
      f1x = p1 * (pow (x0, p2)) + a;
      x1 = x0 - (fx0 / f1x);
      if (x1 == x0)
	printf ("\n %f", x1);
      
      else
	x0 = x1;
    }
  getch ();
}

 Output: - Enter the value x0: 2.33  Enter the power: 3  Enter the Value of a: -3  Enter the Value of b:-5 
  2.279019 
  
