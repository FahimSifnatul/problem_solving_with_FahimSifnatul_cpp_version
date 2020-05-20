//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
int n,k,m,a[32770],range=1;
bool flg;
vector<int>change;

struct val
{
  int pos,depth;
};

int Range()
{
    int temp=n;
 while(temp--)
    range*=2;
}

int makeset()
{
    for(int i=1;i<=range;i++)
        a[i]=i;
}

int partition(int node,int left,int right,val tree[])
{
 if(left==right)
 {
    tree[node].depth=0;
    return tree[node].pos=a[left];
 }
 int mid=(left+right)/2;
 int l=2*node,r=2*node+1;
 partition(l,left,mid,tree);
 partition(r,mid+1,right,tree);
 tree[node].pos=max(tree[l].pos,tree[r].pos);
 tree[node].depth=tree[l].depth+1;
}

int partition(int node,val tree[])
{
 if(tree[node].depth==0)
 {
   change.push_back(tree[node].pos);
   return 0;
 }
 partition(2*node,tree);
 partition(2*node+1,tree);
}

void print()
{
    for(int i=1;i<=range;i++)
    {
        if(a[i]==k and flg==true)cout<<1<<' ';
        else if(a[i]==1 and flg==true)cout<<k<<' ';
        else cout<<a[i]<<' ';
    }
}

int main()
{
 scanf("%d %d %d",&n,&k,&m);
 Range();
 makeset();
 val tree[4*range];
 if(log2(k)<m or (n==log2(k) and m<log2(k)))
 {
     cout<<-1;
     return 0;
 }
 partition(1,1,range,tree);
 int i=1,hold;
 while(true)
 {
     int left=2*i;
     int right=2*i+1;
     if(tree[left].depth==m and tree[left].pos==k)break;
     if(tree[i].depth==m)
     {
      flg=true;
      partition(i,tree);
      break;
     }
     else i=right;
 }
 int len=change.size();
 for(int j=1,l=len-1;l>=0;j++,l--)
 {
     swap(a[change[l]],a[j]);
 }
 print();
 return 0;
}
