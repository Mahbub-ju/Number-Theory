#include<bits/stdc++.h>
using namespace std;
int main(){
int a1[]={1,3,6,4,8};
int l,r;
cin>>l>>r;
int a2[5];
a2[0]=a1[0];
for(int i=1;i<5;i++){
  a2[i]=a1[i]+a2[i-1];
}
cout<<a2[r]-a2[l];
}
