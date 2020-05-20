/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main()
{
    int n,m,z;
    cin>>m>>n>>z;
    int lcm=(m*n)/gcd(m,n);
    cout<<z/lcm;
    return 0;
}
