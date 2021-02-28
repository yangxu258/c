#include<stdio.h>
#include<stdlib.h>

struct stu
{
	char name[20];
	int age;
};

/*int cmp_int(const void*e1,const void*e2)
{
	return *(int*)e1-*(int*)e2;
}*/

/*int cmp_float(const void*e1,const void*e2)
{
	return *(float*)e1-*(float*)e2;
}*/

int cmp_by_age(const void*e1,const void*e2)
{
	return ((struct stu*)e1)->age-((struct stu*)e2)->age;
}



/*void test1()

{
	int arr[]={1,3,5,7,9,2,4,6,8,0};
	int sz=sizeof(arr)/sizeof(arr[0]),i;
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}

}*/

/*void test2()

{
	float f[]={1.0,3.0,5.0,7.0,9.0};
	int sz=sizeof(f)/sizeof(f[0]),i;
	qsort(f,sz,sizeof(f[0]),cmp_float);
	for(i=0;i<sz;i++)
	{
		printf("%f ",f[i]);
	}
}*/

void test3()

{
	struct stu s[3]={{"zhangsan",30},{"lisi",10},{"wangwu",20}};
	int sz=sizeof(s)/sizeof(s[0]),i;
	qsort(s,sz,sizeof(s[0]),cmp_by_age);
	for(i=0;i<sz;i++)
	{
		printf("%d ",s[i].age);
	}
}

void main()

{
//	test1();
//	test2();
	test3();
}