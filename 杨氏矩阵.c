#include<stdio.h>
#include<string.h>

//void move(char* p,int k)
//{
//    int i=0,len=strlen(p),j;
//    for(i=0;i<k;i++)
//    {
//        char  temp=*p;
//        for(j=0;j<len-1;j++)
//        {
//            *(p+j)=*(p+j+1);
//        }
//         *(p+len-1)=temp;
//    }
//}
void  recover(char* left,char* right)
{
    while(left<right)
    {
         char  tmp=*left;
         *left=*right;
         *right=tmp;
         left++;
         right--;
    }
}
void move(char* p,int k)
{
    int len=strlen(p);
    recover(p,p+k-1);
    recover(p+k,p+len-1);
    recover(p,p+len-1);
}





void main()

{
        char   arr[]="abcdef";
        int  k=0;
        scanf("%d",&k);
        move(arr,k);
        printf("%s\n",arr);
 }
