/*

1
**
222
****
33333
******

*/

#include<stdio.h>
int main()
{
	int a,b,i=0;
	const int n=5;
	for(a=0;a<n;a++,printf("\n"))
	{
		if(a%2==0)		
			i++;
		for(b=0;b<n;b++)
		{
			if(b<=a)
			{
				if(a%2==0)
					printf("%d",i);
				else
					printf("*");
			}
			else
				printf(" ");
		}

	}
}
