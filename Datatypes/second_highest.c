#include<stdio.h>

int main()
{
	int num, rem, high=0, sec_high=0, temp;

	printf("Enter the number:");
	scanf("%d",&num);
	temp=num;

	while(num)
	{
		rem=num%10;
		if(rem>=high)
		{
			sec_high=high;
			high=rem;
		}
		else if(rem>sec_high)
			sec_high=rem;

		num=num/10;
	}
	printf("highest=%d\nsecond highest=%d\n",high,sec_high);
}
