#include<stdio.h>

void main()

{
	int arr1[]={1,3,5,7,9};
	int arr2[]={2,4,6,8,0};
	int i;int temp;
	for(i=0;i<5;i++)
	{
		temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",arr1[i]);
		
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		
		printf("%d ",arr2[i]);
	}
	printf("\n");
}