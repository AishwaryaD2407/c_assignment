/*

*       *
**     **
***   ***
**** ****
*********

*/

#include<stdio.h>
int main()
{
const int n=5;
int i,j,J;
//        printf("Enter the value of n ");
//      scanf("%d",&n);
	for(i=0;i<n;i++,printf("\n"))
	{
		for(j=-(n-1);j<n;j++)
		{
			if(j<0)
				J=-j;
			else
				J=j;
			if((J+i)>=(n-1))
				printf("*");
			else 
				printf(" ");
		}
	}

}
