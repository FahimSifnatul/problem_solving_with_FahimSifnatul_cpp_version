#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n,count;
    long long int a,b,digit,c,d,temp;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        digit=b;
        for(count=0;digit>0;)
        {
            digit=digit/10;
            ++count;
        }
        for(int j=0;j<count;j++)
        {
            c=a%10;
            a=a/10;
            d=b%10;
            b=b/10;
            if(c==d && j!=count-1)
            {
                continue;
            }
            else if(c==d && j==count-1)
            {
                cout<<"encaixa\n";
            }
            else
            {
                cout<<"nao encaixa\n";
                break;
            }
        }

    }
}
