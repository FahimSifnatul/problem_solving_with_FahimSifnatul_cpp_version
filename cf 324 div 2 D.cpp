#include<bits/stdc++.h>
using namespace std;

int square_root_fact(int n)
{
    int len = sqrt(n);
    for(int i=2;i<=len;)
    {
        if(n%i == 0)return 0;
        i == 2 ? ++i : i += 2;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    if(n == 3 or n == 5)cout<<1<<endl<<n<<endl;
    else
    {
        cout<<3<<endl;
        cout<<3<<' ';
        int len = (n-3)/2;
        n -= 3;
        for(int i=2;i<=len;)
        {
           int x = square_root_fact(i);
           int y = square_root_fact(n-i);
           if(x == 1 and y == 1)
           {
             cout<<i<<' '<<n-i<<endl;
             return 0;
           }
           i == 2 ? ++i : i += 2;
        }
    }
}

















