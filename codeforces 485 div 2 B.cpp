#include<bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int x,y;
 cin>>x>>y;
 if((double)(y*log(x)) == (double)(x*log(y))) cout<<"=";
 else if((double)(y*log(x)) > (double)(x*log(y))) cout<<'>';
 else cout<<'<';
 return 0;
}







