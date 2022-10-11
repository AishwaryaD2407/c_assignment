#include<stdio.h>

int my_strlen(char *s);
char *my_strcat(char *s1,char *s2,int l);

int main()
{
	char s1[50],s2[50];
	int i, len;

	printf("Enter the 1st string : ");
	scanf(" %[^\n]",s1);

	printf("Enter the 2nd string : ");
	scanf(" %[^\n]",s2);

	len=my_strlen(s1);
	printf("Before String length is : %d\n",len);
	my_strcat(s1,s2,len);
	printf("The concatenated string is : %s\n",s1);
	len=my_strlen(s1);
	printf("After String length is : %d\n",len);

return 0;
}

int my_strlen(char *s)
{
	int i,cnt=0;
	for(i=0;s[i];i++)
		cnt++;
	return cnt;
}

char *my_strcat(char *s1,char *s2,int l)
{
	int i;
	for(i=0;s2[i];i++)
	{
		s1[i+l]=s2[i];
	}
	s1[i+l+1]='\0';
	return s1;
}
