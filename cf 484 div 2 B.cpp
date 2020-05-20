#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

struct val
{
    int index,w;
    val(int a,int b)
    {
        index = a;
        w = b;
    }
};

struct cmp1
{
    bool operator()(const val &a,const val &b)
    {
        return a.w<b.w;//descending
    }
};

struct cmp2
{
    bool operator()(const val &a,const val &b)
    {
        return a.w>b.w;//ascending
    }
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    priority_queue<val,vector<val>,cmp1>extrovert;
    priority_queue<val,vector<val>,cmp2>introvert;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int w;
        cin>>w;
        introvert.push(val(i+1,w));
    }
    string s;
    cin>>s;
    n = n<<1;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '0')
        {
            if(!introvert.empty())
            {
                cout<<introvert.top().index<<' ';
                int index = introvert.top().index;
                int w = introvert.top().w;
                extrovert.push(val(index,w));
                introvert.pop();
            }
            else
            {
                cout<<extrovert.top().index<<' ';
                extrovert.pop();
            }
        }
        else
        {
            cout<<extrovert.top().index<<' ';
            extrovert.pop();
        }
    }
    return 0;
}


// overloaded operator () change the evaluation.










