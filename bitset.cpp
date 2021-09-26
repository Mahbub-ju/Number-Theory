#include<bits/stdc++.h>
using namespace std;
int main(){
bitset<8>bs;
bitset<8>bs2(7);
bitset<8>bs1(5);

//bs.reset();
//bs.set();
//bs[7]=1;
bs=15;
//cout<<bs[2]<<endl;
bs.reset(7);
bs.set(7);
bs.flip();
//=bs>>2;
//bs=bs<<2;
cout<<bs<<endl;
cout<<bs.count()<<endl;
cout<<bs.size()<<endl;
if(bs.any())
    cout<<"true"<<endl;
else cout<<"false"<<endl;

if(bs.none())
    cout<<"true"<<endl;
else cout<<"false"<<endl;

cout<<(bs1 & bs2)<<endl;
cout<<(bs1 | bs2)<<endl;
cout<<(bs1 ^ bs2)<<endl;

}
