

#include<stdio.h>
#include<stdlib.h>

int main(int n, char **p)
{
	char line[1000];
	FILE *fp;

	fp=fopen(p[1],"r");

	while(fscanf(fp,"%s",line) != EOF)
	{
		printf("%s\n",line);
	}

	fclose(fp);
}
