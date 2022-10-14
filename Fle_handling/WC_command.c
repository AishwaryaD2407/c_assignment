#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int n, char **p)
{
	FILE *fp;
	char ch,str[100];
	int chr=0,word=0,line=0;

	fp=fopen(p[1],"r");
	while((ch=fgetc(fp)) != EOF)
	{
		chr++;
		if(ch=='\n')
		{
			line++;
		}
	}

	fseek(fp,0,0);
	while(fscanf(fp,"%s",str)!=EOF)
		word++;
	printf("Charactar : %d\n",chr);
	printf("word      : %d\n",word);
	printf("line      : %d\n",line);

	fclose(fp);
}
