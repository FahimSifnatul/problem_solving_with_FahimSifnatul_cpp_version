/*bismillahir rahmanir rahim*/
#include<cstdio>
#include<iostream>
using namespace std;

int b1(int a[],int len,int chimp)
{
 int index=-1,mid,begin=0,end=len-1;
 while(begin<=end)
 {
     mid=(begin+end)/2;
     if(a[mid]<chimp)
     {
         index=mid;
         begin=mid+1;
     }
     else
     {
         end=mid-1;
     }
 }
 return index;
}

int b2(int a[],int len,int chimp)
{
 int index=-1,mid,begin=0,end=len-1;
 while(begin<=end)
 {
     mid=(begin+end)/2;
     if(a[mid]>chimp)
     {
         index=mid;
         end=mid-1;
     }
     else
     {
         begin=mid+1;
     }
 }
 return index;
}

int main()
{
    int n,q;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    int b[q];
    for(int i=0;i<q;i++)
    {
        scanf("%d",&b[i]);
    }
    int i=0;
    while(i<q)
    {
     int x=b1(a,n,b[i]);
     int y=b2(a,n,b[i]);
     if(x==-1)
        printf("X ");
     else
        printf("%d ",a[x]);
     if(y==-1)
        printf("X\n");
     else
        printf("%d\n",a[y]);
     ++i;
    }
    return 0;
}
