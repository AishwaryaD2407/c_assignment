#include<stdio.h>
#include<stdlib.h>

#define SWAP(a,b) a^=b^=a^=b

void insert_element(int * ptr, int n);

int main()
{
    int arr[10],n,i;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    insert_element(arr,n);
    
      for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}

void insert_element(int * ptr, int n)
{
    int pos, num,i;
    
    printf("Enter the position :");
    scanf("%d",&pos);
     printf("Enter the number :");
    scanf("%d",&num);
    
    for(i=n;i>pos;i--)
    SWAP(*(ptr+i),*(ptr+i-1));
    
    ptr[pos]=num;
}

