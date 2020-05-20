#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,n1,n2,i;
    scanf("%d%d%d",&n,&n1,&n2);
    int *a= new int[n];
    //int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    /*for(int i=0;i<n;i++)
        cout<<a[i]<<endl;*/
    sort(a,a+n);
    double total=0.00,mi,ma;
    mi=min(n1,n2);
    ma=max(n1,n2);
    //cout<<mi<<" "<<ma<<endl;
    while(mi--)
     {
       --n;
       total+=a[n];
     }
    total/=min(n1,n2)*1.00;
    mi=total;
    total=0.00;
    while(ma--)
     {
       --n;
       total+=a[n];
     }
    total/=max(n1,n2)*1.00;
    total+=mi;
    printf("%.8lf\n",total);
    delete a;
    return 0;
}
