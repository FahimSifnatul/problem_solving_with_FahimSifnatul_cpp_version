#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s,o = "0";
    cin>>s;
    s = o + s;
    int cnt = 0,len = s.size();
    for(int i = len-1; i > 0;i--)
    {
        if(s[i] == '0')
        {
            ++cnt;
            //cout<<i<<endl;;
        }
        else if(i == 1 and s[i] == '1')break;
        else
        {
            ++cnt;
            for(int j=i;j>=0;j--)
            {
                if(s[j] == '1')s[j] = '0';
                else
                {
                    s[j] = '1';
                    break;
                }
            }
            ++i;
            //cout<<i<<endl;
        }
        //cout<<s<<endl;
    }
    cout<<cnt;
    return 0;
}
















