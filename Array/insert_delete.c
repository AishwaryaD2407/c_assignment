#include<stdio.h>
#include<stdio_ext.h>

void PrintMenu();
void print(int *ptr,int size);
void insert(int *ptr,int size);
void delete(int *ptr,int size);
void get(int *ptr,int size);

int main()
{
	int arr[50];
	int *ptr=arr;
	int size,i;
	char choice;

	printf("Enter the size of array :  ");
	scanf("%d",&size);

	printf("Enter the elements of array :  ");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);

	while(1)
	{

		PrintMenu();
		__fpurge(stdin);
		printf("\nEnter the choice : ");
		scanf("%c",&choice);

		switch(choice)
		{
			case 'i' : insert(ptr,size);
				   break;
			case 'd' : delete(ptr,size);
				   break;
			case 'g' : get(ptr,size);
				   break;
			case 'p' : print(ptr,size);
				   break;
			case 'q' :printf("\nEXIT\n");
				  return 0;
			default : printf("ERROR: not a valid choice\n");
		}
	}
}

void PrintMenu()
{
	printf("\n------MENU------\n");
	printf("\n  INSERT ---> 'i' \n");
	printf("\n  DELETE ---> 'd' \n");
	printf("\n  PRINT  ---> 'g' \n");
	printf("\n  GET    ---> 'q' \n");

}

void print(int *ptr,int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d  ",*(ptr+i));
}

void insert(int *ptr,int size)
{
	int i, pos, elements;

	printf("Enter the position to insert the elements : ");
	scanf("%d",&pos);
	printf("Enter the elements to be inserted : ");
	scanf("%d",&elements);
	if(pos<=size && pos>=0)
	{
		for(i=size;i>pos;i--)
			*(ptr+i) = *((ptr+i)-1);
		*(ptr+pos)=elements;
	}
	else
		printf("\nInvalid Position\n");

}

void delete(int *ptr,int size)
{
	int element, i, index=-1;
	printf("Enter the element to delete : ");
	scanf("%d",&element);

	for(i=0;i<size;i++)
	{
		if(*(ptr+i)==element)
		{
			index=i;
			break;
		}
	}
	if(index != -1)
	{
		for
			(i=index;i<size-1;i++)
				*(ptr+i)=*((ptr+i)+1);
	}
	else
		printf("Element not found \n");
}


void get(int *ptr,int size)
{
	int i,n;
	printf("Enter the index : ");
	scanf("%d",&n);
	for(i=0;i<size;i++)
	{
		if(n==i)
			printf("\nElements on the %d index is : %d\n",n,*(ptr+i));
	}
}










