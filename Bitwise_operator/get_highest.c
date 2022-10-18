#include <stdio.h>

int main()
{
	unsigned int n;
	printf("enter the integer\n");
	scanf("%d",&n);
	int count=0,store=-1;
	while(n!=0)
	{
		if(n & 1 == 1) 
			store=count;
		n=n>>1;
		count++; 
	}

	if(store==-1)
	{
		printf("No bit is set\n"); 
		return 0;
	}
	printf("Highest bit set ");
	printf("in its binary representation: %d \n",store); 

	return 0;
}
