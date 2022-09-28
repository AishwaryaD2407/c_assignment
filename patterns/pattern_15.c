/*


    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/


#include<stdio.h>
int main()
{
	int a,b,A,B;
	const int n=5;
	for(a=-(n-1);a<n;a++,printf("\n"))
	{
		if(a<0)
			A=-a;
		else
			A=a;
		for(b=-(n-1);b<n;b++)
		{
			if(b<0)
				B=-b;
			else
				B=b;
			if((A+B==0)||(A+B)<=(n-1))
				printf("*");
			else
				printf(" ");
		}
	}
}
