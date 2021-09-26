#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int func(int n){
  int ans=1;
  for(int i=2;i<=n;i++){
    ans=(ans*i)%mod;
  }
  return ans;
}

int Bigmod(int b,int p){
if(p==0)return 1;
else if(p%2==1){
  int a=b%mod;
  b=(Bigmod(b,p-1))%mod;
  return (a*b)%mod;
}
else if(p%2==0){
  int a=(Bigmod(b,p/2))%mod;
  return (a*a)%mod;
}
}

signed main(){
int n,r,a,b,c,ans,j,i,oparation1,oparation2;
cin>>n>>r;
a=func(n);
b=func(r);
c=func(n-r);
ans=a;
oparation1=Bigmod(b,mod-2);
oparation2=Bigmod(c,mod-2);
ans=(ans*oparation1)%mod;
ans=(ans*oparation2)%mod;
cout<<ans;



}
