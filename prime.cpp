#include<bits/stdc++.h>
using namespace std;

/*bool isprime(int n){
if(n<2) return false;

  for(int i=2;i<n;i++){
    if(n%i==0){
        return false;
    }

}
 return true;
}
*/

/*
bool isprime(int n){
if(n<2) return false;

  for(int i=2;i<=sqrt(n)+1;i++){
    if(n%i==0){
        return false;
    }

}
 return true;
}
*/
/*
bool isprime(int n){
if(n<2) return false;

  for(int i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    }

}
 return true;
}
*/

bool ar[1000000];//false 0

/*
void sieve(int n){
ar[1]=true;//true 1
for(int i=2;i<30;i++){
    if(ar[i]==false){
        for(int j=i+i;j<=30;j+=i){
            ar[j]=true;
        }
    }
}
for(int k=1;k<=n;k++){


            if(ar[k]){
        cout<<k<<" "<<"is not prime"<<endl;
    }
    else
       cout<<k<<" "<<"is  prime"<<endl;
}
}
*/

/*
void sieve(int n){
ar[1]=true;//true 1
for(int i=2;i*i<1000000;i++){
    if(ar[i]==false){
        for(int j=i*i;j<=1000000;j+=i){
            ar[j]=true;
        }
    }
}
for(int k=1;k<=n;k++){


            if(ar[k]){
        cout<<k<<" "<<"is not prime"<<endl;
    }
    else
       cout<<k<<" "<<"is  prime"<<endl;
}
}*/

void sieve(int n){
ar[1]=true;//true 1
for(int i=4;i<=n;i+=2)
    ar[i]=true;
for(int i=3;i*i<n;i+=2){
    if(ar[i]==false){
        for(int j=i*i;j<=n;j+=i){
            ar[j]=true;
        }
    }
}

}

int main(){

int n;
cin>>n;
sieve(n);
for(int i=1;i<=n;i++){


            if(ar[i]){
        cout<<i<<" "<<"is not prime"<<endl;
    }
    else
       cout<<i<<" "<<"is  prime"<<endl;
}

}

