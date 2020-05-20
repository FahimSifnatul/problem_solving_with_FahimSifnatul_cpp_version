#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0,n;
    scanf("%d",&t);
    while(t--)
    {
        int k=0,precnt=0;
        while(k<3)
        {
            ++k;
            scanf("%d",&n);
            if(n==1)
                ++precnt;
        }
        if(precnt>1)
            ++cnt;
    }
    cout<<cnt;
    return 0;
}
