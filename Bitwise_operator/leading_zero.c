#include <stdio.h>
#include <malloc.h>
 
int main()
{
	int lim = sizeof(int) * 8;
	int mBit = 1 << (lim - 1);
	int num = 0, count = 0;
	printf ("Enter the digit: ");
	scanf ("%d", &num);	
	while (!(num & mBit))
	{
		num = (num << 1);
		count ++;
	}
	printf ("\nNumber of leading zero's is: %d\n", count);
	return 0;
}
