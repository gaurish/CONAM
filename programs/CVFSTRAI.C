#include<stdio.h>
#include<conio.h>
void
main () 
{
  float x[10], y[10];
  int i, j, n;
  float sx = 0, sy = 0, sx2 = 0, sxy = 0, a2, a1, denum;
  clrscr ();
  printf ("Enter the number of Points=");
  scanf ("%d", &n);
  printf ("Enter the values of x,y=");
  for (i = 0; i < n; i++)
    
    {
      scanf ("%f%f", &x[i], &y[i]);
    }
  for (i = 0; i < n; i++)
    
    {
      sx = sx + x[i];
      sy = sy + y[i];
      sx2 = sx2 + x[i] * x[i];
      sxy = sxy + x[i] * y[i];
    }
  
/* printf("%f",sx);
 printf("%f",sy);
 printf("%f",sx2);
 printf("%f",sxy); */ 
    denum = n * sx2 - sx * sx;
  a2 = (n * sxy - sx * sy) / denum;
  a1 = (sy * sx2 - sx * sxy) / denum;
  printf ("Coefficient a2=%f", a2);
  printf ("\nCoefficient a1=%f", a1);
  getch ();
}


