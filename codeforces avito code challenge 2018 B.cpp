#include<bits/stdc++.h>
using namespace std;
struct val
{
    int x,y;
}v[2*100000];

bool compare(val a,val b)
{
    if(a.x==b.x)
        return a.y<b.y;
    else
        return a.x<b.x;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n,m;
  long long int sum = 0;
  cin>>n;
  int c,d;
  for(int i=0;i<n;i++)
  {
     cin>>c>>d;
     v[i].x = c;
     v[i].y = d;
  }
  cin>>m;
  for(int i=n;i<n+m;i++)
  {
     cin>>c>>d;
     v[i].x = c;
     v[i].y = d;
  }
  sort(v,v+(n+m),compare);
  int i=n+m-1;
  while(i>0)
  {
     if(v[i].x == v[i-1].x)
     {
        sum += v[i].y;
        i -= 2;
     }
     else
     {
         sum += v[i].y;
         --i;
     }
  }
  if(i == 0) sum += v[i].y;
  cout<<sum<<endl;
  return 0;
}



















