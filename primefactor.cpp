#include<bits/stdc++.h>
using namespace std;

const int mx=1e7+7;
bitset<mx> is_prime;
vector<int>prime;
void primeGen(int n){
for(int i=3;i<=n;i+=2)is_prime[i]=1;
for(int i=3;i*i<=n;i+=2){
    if(is_prime[i]==1){
        for(int j=i+i;j<=n;j+=i){
            is_prime[j]=0;
        }
    }
}
is_prime[2]=1;
prime.push_back(2);
for(int i=3;i<=n;i+=2){
    if(is_prime[i]==1)
        prime.push_back(i);
}
}




vector<int> factorize(int n){
vector<int>primefactor;
for(int i=0;prime[i]<=n;i++){
    if(n%prime[i]==0){
        while(n%prime[i]==0){
            n/=prime[i];
            primefactor.push_back(prime[i]);
        }
    }
}
return primefactor;
}



int main(){

    int lim=1e7;
    primeGen(lim);
    int x;
    cin>>x;
    vector<int>ans=factorize(x);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
