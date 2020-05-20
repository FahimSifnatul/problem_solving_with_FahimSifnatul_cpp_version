#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int n,k,temp;
   cin>>n>>k;
   while(k>0)
   {
      temp = n%10;
      k <= temp ? (n -= k, k -= temp) : (n /= 10, k -= (temp+1));
   }
   cout << n << endl;
   return 0;
}
