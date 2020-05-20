#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(n==1 or n==2)
    {
        printf("0");
        return 0;
    }
    vector<int>v;
    int len = n-1;
    for(int i=0;i<n-1;i++)
    {
       v.push_back(a[i+1]-a[i]));
    }
}







