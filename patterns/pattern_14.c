/*

    *
    **
    ***
    ****
    *****
*****
 ****
  ***
   **
    *

*/


#include<stdio.h>
int main()
{
	const int n=5;
	int i,j,J;
 for(i=0;i<n;i++,printf("\n"))
		for(j=-(n-1);j<n;j++)
			if(j<0)

				printf(" ");
			else if(j<=i)
				printf("*");
			else
				printf(" ");		
 for(i=n-1;i>=0;i--,printf("\n"))
	 for(j=-(n-1);j<n;j++)
	 {
		 if(j<0)
			 J=-j;
		 else
			 J=j;			
		 if(j>0)
			 printf(" ");
		 else if(J<=i)
			 printf("*");
		 else
			 printf(" ");
	 }
}
