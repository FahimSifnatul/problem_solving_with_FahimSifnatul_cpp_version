#include<cstdio>

class div
{
    long long int n;
public:
    int input()
    {
        scanf("%I64d",&n);
    }
    friend long long int cal();
}a;

long long int cal()
{
    return a.n/2520;
}

int main()
{
   a.input();
   printf("%I64d\n",cal());
   return 0;

}
