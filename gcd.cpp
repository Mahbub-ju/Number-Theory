#include<bits/stdc++.h>
using namespace std;

/*int GCD(int a,int b){
if(b==0)
    return  a;
else  GCD(b,a%b);

}
*/
int main(){
/*
int a,b,i,j;
cin>>a>>b;
int mn=min(a,b);
for(i=mn;i>0;i--){
    if(a%i==0&&b%i==0){
        break;
    }
}
cout<<"GCD:"<<i<<endl;
*/
/*int a,b,i,j;
cin>>a>>b;
cout<<"GCD:"<<GCD(a,b)<<endl;*/
int a,b;
cin>>a>>b;
cout<<"GCD:"<<__gcd(a,b);
}
