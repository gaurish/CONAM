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
  printf ("\nenter the first exponent mentisa :");
  scanf ("%d", &e1);
  printf ("\nenter the second exponent :");
  scanf ("%d", &e2);
  if (e1 == e2)
    
    {
       if (m1 > m2)
	
	{
	  rm = m1 - m2;
	  if (rm > 0.1000 && rm <= 0.9999)
	    
	    {
	      re = e1;
	      printf ("%fE%d", rm, re);
	    }
	  
	  else if (rm > 1)
	    
	    {
	      while (rm > 1)
		
		{
		  rm = rm / 10;
		  i++;
		}
	      re = e1;
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
	      re = e1;
	      re = re - i;
	      if (re < 1)
		printf ("\nUnderFlow");
	      
	      else
		printf ("%fE%d", rm, re);
	    }
	}
      
      else
	printf ("subtruction not posible");
    }
  
  else if (e1 > e2)
    
    {
      if (m1 > m2)
	
	{
	  rm = m1 - m2;
	  if (rm > 0.1000 && rm <= 0.9999)
	    
	    {
	      re = e1;
	      printf ("%fE%d", rm, re);
	    }
	  
	  else if (rm > 1)
	    
	    {
	      while (rm > 1)
		
		{
		  rm = rm / 10;
		  i++;
		}
	      re = e1;
	      re = re + i;
	      if (re > 99)
		printf ("\nOverFlow");
	      
	      else
		printf ("\n%fE%d", rm, re);
	    }
	  
	  else if (rm < 0.1)
	    
	    {
	      while (rm < 0.1)
		
		{
		  rm = rm * 10;
		  i++;
		}
	      re = e1;
	      re = re - i;
	      if (re < 1)
		printf ("\n UnderFlow");
	      
	      else
		printf ("\n %fE%d", rm, re);
	    }
	}
      
      else
	printf ("subtruction not posible");
     }
  
  else if (e2 > e1)
    
    {
      if (m1 > m2)
	
	{
	   rm = m1 - m2;
	  if (rm > 0.1000 && rm <= 0.9999)
	    
	    {
	      re = e2;
	      printf ("%fE%d", rm, re);
	    }
	  
	  else if (rm > 1)
	    
	    {
	      while (rm > 1)
		
		{
		  rm = rm / 10;
		  i++;
		}
	      re = e2;
	      re = re + i;
	      if (re > 99)
		printf ("OverFlow");
	      
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
	      re = e2;
	      re = re - i;
	      if (re < 1)
		printf ("UnderFlow");
	      
	      else
		printf ("%fE%d", rm, re);
	    }
	}
      
      else
	printf ("subtruction not posible");
     }
  getch ();
}

 Output: - enter the first mentisa: 0.5467  enter the second mentisa: 0.0007  enter the first exponent: 5  enter the second exponent:5 
  0.5474E5
  
