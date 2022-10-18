#include<stdio.h>
#include<string.h>

char *str_cat(char *,char *);
int main()
{
	char s[40],d[20];
	printf("Enter the Main string\n");
	scanf("%s",s);
	printf("Enter the Sub string\n");
	scanf("%s",d);
	printf("Main string = %s\t Sub string = %s\n",s,d);
	str_cat(s,d);
	printf("Concatenate string = %s\n",s);
}
char* str_cat(char *p,char *q)
{
	int i,l;
	l=strlen(p);
	for(i=0;q[i];i++)
	{
		p[i+l]=q[i];
	}
	p[i+l]='\0';
	return p;
}
