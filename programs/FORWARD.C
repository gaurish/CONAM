#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<math.h>
void
main () 
{
  int n;
  int i, j;
  float ax[10];
  float ay[10];
  float x;
  float y = 0;
  float h;
  float p;
  float diff[20][20];
  float y1, y2, y3, y4;
  clrscr ();
  printf ("\t\t!! NEWTON GRAGORY FORWARD INTERPOLATION FORMULA!!\n");
  printf ("\t\t By KRISHAN \t\t\n");
  printf ("\t\t enter the no of terms ->");
  scanf ("%d", &n);
  printf ("\n\t\t enter the value in form of x->");
  for (i = 0; i < n; i++)
    
    {
      printf ("\n\t\t enter the value of x%d->", i + 1);
      scanf ("%f", &ax[i]);
    }
  printf ("\n\t\tenter the value in the form of y->");
  for (i = 0; i < n; i++)
    
    {
      printf ("\n\t\tenter the value of y %d->", i + 1);
      scanf ("%f", &ay[i]);
    }
  printf ("\n\t\tenter the value of x for");
  printf ("\n\t\t which u want the value of y->");
  scanf ("%f", &x);
  h = ax[1] - ax[0];
  for (i = 0; i < n - 1; i++)
    diff[i][1] = ay[i + 1] - ay[i];
  for (j = 2; j <= 4; j++)
    for (i = 0; i < n - j; i++)
      diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1];
  
  do
    
    {
      i++;
    }
  while (ax[i] < x);
  i--;
  p = (x - ax[i]) / h;
  y1 = p * diff[i - 1][1];
  y2 = p * (p + 1) * diff[i - 1][2] / 2;
  y3 = p * (p + 1) * (p - 1) * diff[i - 2][3] / 6;
  y4 = (p + 2) * (p + 1) * p * (p - 1) * diff[i - 3][4] / 24;
  y = ay[i] + y1 + y2 + y3 + y4;
  printf ("\n\t\t when x=%6.4f,y=%6.8f", x, y);
  printf ("\n\n\n\t\t\t!! PRESS ENTER TO EXIT!!");
  getch ();
}


