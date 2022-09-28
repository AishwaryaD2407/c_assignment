/*

*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
 
*/

#include<stdio.h>
#define N 5
int main()
{
	unsigned int A,B;
	signed int a,b;
	for(a=-(N-1);a<N;a++,printf("\n"))
	{
		if(a<0)
			A=-a;
		else
			A=a;
		for(b=-(N-1);b<N;b++)
		{
			if(b<0)
				B=-b;
			else
				B=b;
			if(A<B)
				printf(" ");
			else
				printf("*");
		}
	}
}
