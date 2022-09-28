/*

*********
 *******
  *****
   ***
    *

*/

#include<stdio.h>
const int n=5;

int main()
{
        int a,b,B;
        for(a=(n-1);a>=0;a--,printf("\n"))
        {
                for(b=-(n-1);b<n;b++)
                {
                        if(b<0)
                                B=-b;
                        else
                                B=b;
                        if((a==B)||(a>B))
                                printf("*");
                        else
                                printf(" ");
                }
        }
}

