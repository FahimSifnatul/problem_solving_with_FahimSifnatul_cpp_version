#include<bits/stdc++.h>
using namespace std;

struct val
{
    int diff,index;
    val(int a,int b)
    {
        diff = a;
        index = b;
    }
};

bool compare(val a,val b)
{
    return a.diff<b.diff;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n],ans = -1;
    bool flg = false;
    vector<val>v;
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
       if(a[i] <= i and flg != true)
       {
          ans = i+1;
          flg = true;
       }
       else if(a[i] > i)
       {
           v.push_back(val(a[i]-i,i));
       }
    }
    if(ans != -1)
    {
        cout<<ans<<endl;
        return 0;
    }
    sort(v.begin(),v.end(),compare);
    cout<<v[0].index+1<<endl;
    return 0;
}







