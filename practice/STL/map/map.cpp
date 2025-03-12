#include<bits/stdc++.h>
using namespace std;


int main(){
//map is like dictionary in python
map<int,string>m;
m[1]="sourav";
m[1]="nihar";
m[2]="akash";
m[3]="bignesh";
m.insert({4,"rajesh"});

for(auto i:m)
cout<<i.first<<": "<<i.second<<endl;

auto it=m.find(4);
cout<<(*it).first<<":"<<(*it).second;
return 0;

}