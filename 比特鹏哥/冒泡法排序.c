#include<stdio.h>

void bubble_sort(int arr[],int sz)
{
	int i,j;
	int temp,flag=1;
	for(i=0;i<sz-1;i++)
	{
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=0;
			}
		}
		if(flag==1)
			break;
	}
}

void main()

{
	int i,arr[]={9,8,7,6,5,4,3,2,1,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);
	for(i=0;i<sz;i++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");
}