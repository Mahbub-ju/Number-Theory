#include<bits/stdc++.h>
using namespace std;

int Bigmod(int b,int p,int m){
if(p==0)return 1;
else if(p%2==1){
  int a=b%m;
  b=(Bigmod(b,p-1,m))%m;
  return (a*b)%m;
}
else if(p%2==0){
  int a=(Bigmod(b,p/2,m))%m;
  return (a*a)%m;
}
}
int main(){
int base,power,mod;
cin>>base>>power>>mod;
cout<<Bigmod(base,power,mod);

}
