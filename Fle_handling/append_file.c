#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *f1tobuf(char *f1);

int main(int n,char **p)
{
	char s1[1000],*buf;
	FILE *fp1,*fp2;
	int i;

	for(i=1;i<n-1;i++)
	{
		fp2=fopen(p[i+1],"a");
		buf=f1tobuf(p[i]);
//		puts(buf);
		fprintf(fp2,"%s",buf);
		fclose(fp2);
	}
}


void *f1tobuf(char *f1)
{
	int size;
	FILE *fp;
	char *buf;
	fp=fopen(f1,"r");
	fseek(fp,0,2);
	size=ftell(fp);
	fseek(fp,0,0);
	buf=calloc(1,size);
	fread(buf, size, 1,fp);
	fclose(fp);
	return buf;
}
