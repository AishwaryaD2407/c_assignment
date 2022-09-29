/*

1
33
555
7777
99999
8888
666
44
2

*/

#include<stdio.h>
int main()
{
	const int n=4;
	int a,b,A,x=-1,y=12;
	for(a=-n;a<=n;a++,printf("\n"))
	{
		x=x+2;

		if(a<0)
			A=-a;
		else
		{
			y=y-2;
			A=a;
		}
		for(b=1;b<=n+1-A;b++)
		{
			if(a<=0)
				printf("%d",x);
			else
				printf("%d",y);
		}

	}
}

