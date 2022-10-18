#include<stdio.h>
void nonrepeated(int*,int);
int main()
{
    int arr[100],i,n,f=0,overeflow=0;
	printf("Enter number of elements:");
    scanf("%d",&n);
    if(n>50)
    {
        printf("Memory Overflow");
        return 0;
    }
    if(n<=0)
    {
        n=-n;
        f=1;
    }
	printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(f==1)
    {
        printf("invalid size");
        return 0;
    }
    nonrepeated(arr,n);
}

void nonrepeated(int* arr,int n)
{
    int i,j,cnt,f=0;
    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=0;j<n;j++)
        {
            if(j<i)
            {
                if(arr[i]==arr[j])
                break;
            }
            if(arr[i]==arr[j])
            cnt++;
        }
        if(cnt==1)
        {
            f=1;
            printf("%d ",arr[i]);
        }
    }
    if(f==0)
    printf("no non-repeated elements");
}
