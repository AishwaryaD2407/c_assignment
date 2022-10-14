#include<stdio.h>
#include<stdlib.h>
#define DATA 1000
int main(int n, char **p)
{
	char  arr[DATA];
	FILE *fp1;
	fp1=fopen ("a.exe","w");
	if(fp1==NULL)
	{
		printf("Unable to create file.\n");
		return 0;
	}
	printf("Enter the contents to be added:\n");
	fgets(arr,DATA,stdin);

	fputs(arr,fp1);
	printf("File created and saved successfully.\n");
	fclose(fp1);
}
