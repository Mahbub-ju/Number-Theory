#include<bits/stdc++.h>
using namespace std;
int main(){

  vector<int>divisor;
  vector<int>::iterator it;

int n;
cin>>n;
divisor.push_back(1);
for(int i=2;i<=n/2;i++){
    if(n%i==0)
    divisor.push_back(i);

}
divisor.push_back(n);
for(it=divisor.begin();it!=divisor.end();it++){
    cout<<*it<<endl;

}

}
