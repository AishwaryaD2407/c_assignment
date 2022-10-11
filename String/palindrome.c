#include<stdio.h>

int my_strlen(char *p);
int str_rev(char *p,int size);

int main()
{
	char s1[50],length;

	printf("Enter the string : ");
	gets(s1);

	length=my_strlen(s1);
	if(str_rev(s1,length)==1)
		printf("String is Palindrome.\n");
	else 
		printf("String is not Palindrome.\n");
}


int my_strlen(char *p)
{
	int cnt=0,i;
	for(i=0;p[i];i++)
		cnt++;
	return cnt;
}         

int str_rev(char *p,int size)
{
	int i,j,cnt=0;
	for(i=0,j=size-1;i<size/2;i++,j--)
	{
		if(p[i]==p[j])
			cnt++;
	}
	if(cnt==size/2)
		return 1;
}   
