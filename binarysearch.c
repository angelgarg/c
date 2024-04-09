#include<stdio.h>
int
main () 
 { 
int arr[7] = { 11, 17, 18, 23, 36, 50, 95 };

int h = 6, l = 0;

int m;

m = (h + l) / 2;

  //search 50
  while (l <= h)
  
  {
	
if (arr[m] == 50)
	  
	  {
		
 
printf ("found 50 at index %d", m);
		
break;
	  
}
	
	else if (arr[m] > 50)
	  
	  {
		
h = m - 1;
		
m = (h + l) / 2;
	  
}
	
	else
	  {
		
l = m + 1;
		
m = (h + l) / 2;
	  
}
  
}

 
return 0;

}
