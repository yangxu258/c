#include<stdio.h>
//调整数组使奇数全部位于偶数前面

void move(int arr[],int sz)
{
	int left=0;
	int temp;
	int right=sz-1;
	while(left<right)
	{
		while((left<right)&&(arr[left]%2==1))
		{
			left++;
		}
		while((left<right)&&(arr[right]%2==0))
		{
			right--;
		}
		
		temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
	}
}

void print(int arr[],int sz)
{
	int i;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void main()

{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	move(arr,sz);
	print(arr,sz);
}