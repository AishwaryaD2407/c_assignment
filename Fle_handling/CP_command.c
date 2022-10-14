#include<stdio.h>
int main(int n, char **p)
{
	char ch;
	FILE *fp1;
	FILE *fp2;
	fp1=fopen(p[1],"r");
	fp2=fopen(p[2],"w");
	while((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch,fp2);
	}

	fclose (fp1);
	fclose (fp2);
}
