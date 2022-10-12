#include<stdio.h>
#include<stdlib.h>

struct array {
	char arr;
};

void sort(struct array **v);

int main()
{
	struct array *var1[10],var2[10]={'h','e','l','l','o'};
	int i;

	for(i=0;i<10;i++)
	{
		var1[i]=(struct array *)malloc(sizeof(struct array));
		var1[i]-> arr=var2[i].arr;
	}

	sort(var1);
}

void sort(struct array **v)
{
	int i,j;
	char t;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			if(v[i]->arr < v[j]->arr)
			{
				t=v[i]->arr;
				v[i]->arr=v[j]->arr;
				v[j]->arr=t;
			}
	}
	for(i=0;i<10;i++)
		printf("%c",v[i]->arr);

}
