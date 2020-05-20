#include <bits/stdc++.h>
bool c[7368790];
int p[500001],i,j,k=2,n;
int main(){
p[0]=0,p[1]=2;
for(i=3;i<2716;i+=2)for(j=2*i+i;j<7368790;j+=2*i)c[j]=1;	
for(i=3;i<7368790;i+=2)if(!c[i])p[k]=i,++k;
cin>>n;
printf("%d",p[n]);
}

