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


int phi(int n){
  int result=n;
for(int i=0;i<prime.size();i++){
    int p=prime[i];
  if(n%p==0){
    while(n%p==0){
      n/=p;
    }
    result=result-result/p;
  }
}
if(n>1)
  result=result-result/n;
return result;

    }


/*
int phi(int n){

  int result=n;
for(int i=2;i*i<=n;i++){
    if(n%i==0){
      while(n%i==0)
        n/=i;
        result=result-result/i;

    }


}
 if(n>1)result=result-result/n;
   return result;
}
*/
int main(){
  int n;
 cin>>n;
    primeGen(n);
  cout<<phi(n);






}
