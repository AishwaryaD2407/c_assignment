#include <stdio.h>

void count1s0s(int N)
{
	int count0 = 0, count1 = 0;

	while (N > 0) {

		if (N & 1) {
			count1++;
		}

		else {
			count0++;
		}

		N = N >> 1;
	}

	printf("Count of 0s in N is %d\n", count0);
	printf("Count of 1s in N is %d\n", count1);
}

int main()
{
	int N;
	printf("Enter the integer: ");
	scanf("%d",&N);

	count1s0s(N);
	return 0;
}
