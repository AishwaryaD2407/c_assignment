/*

    *****
   *****
  *****
 *****
*****

*/


#include<stdio.h>
int main()
{
        int i,j,n=5,k;
        for(i=n;i>0;i--)
        {
		k=i;
		while(k)
		{
			printf(" ");
			--k;
		}
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

