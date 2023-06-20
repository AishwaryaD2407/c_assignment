#include<stdio.h>

void display_bit(int data)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d",(data>>i)&1);
	printf("\n");
}


int main()
{
	int data, pos, cnt, choice, mask;

	printf("Enter the number :");
	scanf("%d",&data);

	display_bit(data);

	printf("Enter the position and the cnt:");
	scanf("%d%d",&pos, &cnt);

	mask = ~(~data<<cnt)<<pos-cnt+1;

	printf("FOR SET= 1\n CLEAR= 2\n INVERT= 3\n EXIT =4\n");
	scanf("%d",&choice);

//	while(1)
		switch(choice)
		{
			case 1: data = data | mask;
				display_bit(data);
				break;

			case 2: data = data & ~mask;
				display_bit(data);
				break;

			case 3: data = data ^ mask;
				display_bit(data);
				break;
			default : return 0;
				 break;
		}

}
