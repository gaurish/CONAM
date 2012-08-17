#include<stdio.h>
#include<conio.h>
#include<math.h>
void
main () 
{
  int i, n;
  float x[20], y[20], sx, sx2, slogy, sxlogy, denom, a, b, c, sy;
  clrscr ();
  printf ("enter the number of terms = ");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    
    {
      printf ("enter x[%d] = ", i);
      scanf ("%f", &x[i]);
      printf ("enter y[i] = ", i);
      scanf ("%f", &y[i]);
    }
  sx = 0.0, sx2 = 0.0, slogy = 0.0, sxlogy = 0.0, sy = 0;
  for (i = 1; i <= n; i++)
    
    {
      sx = sx + x[i];
      sy = sy + y[i];
      sx2 = sx2 + x[i] * x[i];
      slogy = slogy + log10 (y[i]);
      sxlogy = sxlogy + x[i] * (log10 (y[i]));
    }
  denom = n * sx2 - sx * sx;
  b = (n * sxlogy - sx * slogy) / denom;
  c = (slogy * sx2 - sx * sxlogy) / denom;
  printf ("b=%f\n", b);
  printf ("c=%f\n", c);
  a = exp ((double) c);
  printf ("regression coefficients :=\n");
  printf ("a = %f\n", a);
  printf ("b = %f", b);
  getch ();
}  
