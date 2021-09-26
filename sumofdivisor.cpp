#include<bits/stdc++.h>
using namespace std;

const int mx=1e7+7;
bitset<mx>bs;
vector<int>prime;

void primeGen(int n){
for(int i=3;i<=n;i+=2)
bs[i]=1;
for(int i=3;i*i<=n;i+=2){
    if(bs[i]==1){
        for(int j=i+i;j<=n;j+=i){
            bs[j]=0;
        }
    }
}
bs[2]=1;
prime.push_back(2);
for(int i=3;i<=n;i+=2){
    if(bs[i]==1){
        prime.push_back(i);
    }
}

}

void sumofdivisor(int n){
    int ans=1;
for(int i=0;prime[i]<=n;i++){
if(n%prime[i]==0){
    int cnt=1;
while(n%prime[i]==0){
    n/=prime[i];
    //cout<<prime[i];
    cnt++;
}

     ans*=(pow(prime[i],cnt)-1)/(prime[i]-1);

}

}
 cout<<ans;
}

int main(){

int lim=1e7;
primeGen(lim);
int n;
cin>>n;
sumofdivisor(n);



}

