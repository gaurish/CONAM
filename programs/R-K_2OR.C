#include<stdio.h>
#include<conio.h>
float
f (float x, float y) 
{
  return (x * y);
}

void
main () 
{
  int i;
  float x, y, x1, y1, xf, h, s, s1, s2;
  clrscr ();
  printf ("Enter the value of x1,y1,xf=");
  scanf ("%f%f%f", &x1, &y1, &xf);
  printf ("Enter the value of Interval=");
  scanf ("%f", &h);
  x = x1;
  y = y1;
  i = 1;
  printf ("\nPoints constituiting solution curve are \n\n");
  printf ("\n Points 	x		y");
  printf ("\n %d\t %f\t %f", i, x, y);
  while (x < xf)
    
    {
      s1 = f (x, y);
      x = x + h;
      s2 = f (x, y + h * s1);
      y = y + h * (s1 + s2) / 2;
      i = i + 1;
      printf ("\n %d \t %f \t %f", i, x, y);
    }
  getch ();
}
