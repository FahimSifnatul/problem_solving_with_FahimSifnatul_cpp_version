//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
string x,z;
int len;

int main()
{
    cin>>x>>z;
    len=x.length();
    for(int i=0;i<len;i++)
    {
        if(x[i]<z[i])
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<z<<endl;
    return 0;
}
