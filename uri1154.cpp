#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float age,sum=0,count=0;

    while(cin>>age && age>=0)
    {

       sum=sum+age;
       ++count;

    }
    sum=sum/count;


    cout<<fixed<<setprecision(2)<<sum<<"\n";





    return 0;

}


