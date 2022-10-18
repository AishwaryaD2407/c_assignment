#include<stdio.h>
char * str_cpy(char *,char *);
int main()
{
	char s[20],d[20];
	printf("Enter the main string\n");
	scanf("%s",s);
	str_cpy(s,d);
	printf("Main string copy into another \nSource string = %s\nSubstring = %s\n",s,d);
}
char *str_cpy(char *p,char *d)
{
	int i;
	for(i=0;p[i];i++)
	{
		d[i]=p[i];
	}
	d[i]='\0';
	return d;
}
