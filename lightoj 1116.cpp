#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

struct val
{
    ll o,e;
    val(ll x,ll y)
    {
       o = x;
       e = y;
    }
};

bool compare(val a,val b)
{
    return a.e < b.e;
}

int main()
{
 ll n;
 int t;
 scanf("%d",&t);
 for(int k=1;k<=t;k++)
 {
     scanf("%lld",&n);
     printf("Case %d: ",k);
     if(n%2 != 0) printf("Impossible\n");
     else
     {
         ll even = 2,odd;
         vector<val>v;
         while(n%2 == 0)
         {
            odd = n/2;
            //cout<<odd<<' '<<even<<endl;
            if(odd % 2 != 0)
            {
               v.push_back(val(odd,even));

            }
            n /= 2;
            even *= 2;
         }

         sort(v.begin(),v.end(),compare);
         v.size() == 0 ? cout<<"Impossible" : cout<<v[0].o<<' '<<v[0].e;
         printf("\n");
     }
 }
 return 0;
}














