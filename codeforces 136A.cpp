#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 scanf("%d",&n);
 int a[n],gift[n];
 for(int i=1;i<=n;i++)
 {
    scanf("%d",&a[i]);
    gift[a[i]]=i;
 }
 for(int i=1;i<=n;i++)
 {
    printf("%d ",gift[i]);
 }
 return 0;
}
