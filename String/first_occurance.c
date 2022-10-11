#include<stdio.h>

char *find_occurance(char *s1,char *s2);
int cnt=1;

int main()
{
	char s1[50],s2[50];
	char *ptr;


	printf("Enter the first string : ");
	gets(s1);

	printf("Enter the second string : ");
	gets(s2);

	ptr=find_occurance(s1,s2);
	if(ptr==NULL)
		printf("No occurance found in the given string \n");
	else
		printf("'%s' is fond on '%d' \n",s2,cnt);
}

char *find_occurance(char *s1,char *s2)
{
	int i,j;
	for(i=0;s1[i];i++)
	{
		if(s1[i]==' ')
			cnt++;
		if(s1[i]==s2[0])
		{
			for(j=1;s2[j];j++)
			{
				if(s1[i+j]!=s2[j])
					break;
			}
			if(s2[j]=='\0')
				return s1+i;
		}
	}
	return NULL;
}
