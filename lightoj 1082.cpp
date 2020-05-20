//bismillahir rahmanir rahim
#include<bits/stdc++.h>
#define inf 10e7
using namespace std;
int i,j;

int partition(int a[],int tree[],int node,int left,int right)
{
 if(left==right)return tree[node]=a[left];
 int mid=(left+right)/2;
 partition(a,tree,2*node,left,mid);
 partition(a,tree,2*node+1,mid+1,right);
 tree[node]=min(tree[2*node],tree[2*node+1]);
}

int query(int a[],int tree[],int node,int left,int right,int i,int j)
{
 if(right<i or left>j) return inf;
 if(left>=i and right<=j) return tree[node];
 int mid=(left+right)/2;
 return min(query(a,tree,2*node,left,mid,i,j),query(a,tree,2*node+1,mid+1,right,i,j));
}

int main()
{
 int cs=0,n,q,t;
 scanf("%d",&t);
 while(t--)
 {
     scanf("%d %d",&n,&q);
     int a[n],tree[3*n];
     for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
     partition(a,tree,1,0,n-1);
     printf("Case %d:\n",++cs);
     while(q--)
     {
         scanf("%d %d",&i,&j);
      printf("%d\n",query(a,tree,1,0,n-1,i-1,j-1));
     }
 }
 return 0;
}










