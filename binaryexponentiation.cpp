#include<bits/stdc++.h>
using namespace std;
#define int long long
int func(int base,int power,int mod){
int ans=1;
while(power){
  if(power%2==1){
  ans=(ans*base)%mod;
  power--;
}
else{
  base=(base*base)%mod;
  power=power/2;
}
}
 return ans;
}


signed main(){

int base,power,mod=1e9;
cin>>base>>power;
cout<<func(base,power,mod);

}
