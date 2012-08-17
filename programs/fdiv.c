#include<stdio.h>
#include<conio.h>
void
main () 
{
  float m1, m2, rm;
  int e1, e2, i = 0, re = 0;
  clrscr ();
  printf ("\nenter the first mentisa :");
  scanf ("%f", &m1);
  printf ("\nenter the second mentisa :");
  scanf ("%f", &m2);
  printf ("\nenter the first exponent :");
  scanf ("%d", &e1);
  printf ("\nenter the second exponent :");
  scanf ("%d", &e2);
  rm = m1 \ m2;
  if (rm > 0.1000 && rm <= 0.9999)
    
    {
      re = e1 - e2;
      printf ("%fE%d", rm, re);
    }
  
  else if (rm > 1)
    
    {
      while (rm > 1)
	
	{
	  rm = rm / 10;
	  i++;
	}
      re = e1 - e2;
      re = re + i;
      if (re > 99)
	printf ("\nOverFlow");
      
      else
	printf ("%fE%d", rm, re);
    }
  
  else if (rm < 0.1)
    
    {
      while (rm < 0.1)
	
	{
	  rm = rm * 10;
	  i++;
	}
      re = e1 - e2;
      re = re - i;
      if (re < 1)
	printf ("\nUnderFlow");
      
      else
	printf ("%fE%d", rm, re);
    }
  getch ();
}

 Output: - enter the first mentisa: 0.8888  enter the second mentisa: 0.2000  enter the first exponent: 5  enter the second exponent:3 
  0.4444E2
  
