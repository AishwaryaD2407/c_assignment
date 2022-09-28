/*

    A
   bb
  CCC
 dddd
EEEEE

*/

#include<stdio.h>
int main()
{
	const int n=5;
	int a,b,c=64,d=96;
	for(a=0;a<n;a++,printf("\n"))
	{
		c=c+1;
		d=d+1;
		for(b=0;b<n;b++)
		{
			if((a+b)>=(n-1))
			{
				if(a%2==0)
					printf("%c",c);
				else
					printf("%c",d);
			}
			else 
				printf(" ");
		}
	}
}	
