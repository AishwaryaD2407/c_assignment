#include<stdio.h>
int str_cmp(char *,char *);
int main()
{
	char s[20],d[20];
	int i;
	printf("Enter the Any two strings\n");
	scanf("%s%s",s,d);
	i=str_cmp(s,d);
	if(i==0)
		printf("Both string are same\n");
	else if(i<0)
		printf("S1 is greater than S2\n");
	else
		printf("S1 is lesser than S2\n");
}
int str_cmp(char *s1,char *s2)
{
	while(*s1 && *s2)
	{
		if(*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	if(*s1 == *s2)
		return 0;
	else
		if(*s1>*s1)
			return 1;
		else
			return -1;

}
