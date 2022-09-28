/*

1
12
123
1234
12345
1234
123
12
1

*/

#include<stdio.h>
int main()
{
	const int n=5;
	int a,b,A;
	for(a=-n;a<=n;a++,printf("\n"))
	{
		if(a<0)
			A=-a;
		else
			A=a;
		for(b=1;b<=n+1-A;b++)
			printf("%d",b);
	}
}
