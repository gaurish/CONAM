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
  float x, y, x1, y1, xf, h;
  printf ("Enter the value of x1,y1,xf=");
  scanf ("%f%f%f", &x1, &y1, &xf);
  printf ("Enter the size of interval=");
  scanf ("%f", &h);
  x = x1;
  y = y1;
  i = 1;
  printf ("\n\nPoints constituting solution curve are\n\n");
  printf ("\n Point 	x	y");
  printf ("\n %d\t %f\t %f", i, x, y);
  while (x < xf)
    
    {
      y = y + h * f (x, y);
      x = x + h;
      i = i + 1;
      printf ("\n %d \t %f \t %f", i, x, y);
    }
  getch ();
}
