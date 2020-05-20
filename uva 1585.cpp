/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    string s;
    while(t--)
    {
        int flg=1,sum=0;
        cin>>s;
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            if(s[i]=='O')
            {
                sum+=flg;
                ++flg;
            }
            else
                flg=1;
        }
        printf("%d\n",sum);
    }
    return 0;
}
