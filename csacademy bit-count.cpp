//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
int cnt=0;

int bitcount(int n)
{
 if(n==0)return 0;
 else
 {
     if(n%2==1)++cnt;
     bitcount(n/2);
 }
}

int main()
{
    int n;
    scanf("%d",&n);
    bitcount(n);
    printf("%d\n",cnt);
    return 0;
}
