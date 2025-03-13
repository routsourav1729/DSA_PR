#include<bits/stdc++.h>
using namespace std;


int main(){
//map is like dictionary in python
map<int,string>m;
m[2]="sourav";
m[1]="nihar";
m[2]="akash";
m[4]="bignesh";
m.insert({3,"rajesh"});

for(auto i:m)
cout<<i.first<<": "<<i.second<<endl;

auto it=m.find(4);
//it is an iterator(pointer) pointing to a location
// which has a key and a value
//(*it) is values in that location 
cout<<(*it).first<<": "<<(*it).second;

it= m.find(5);
if (it==m.end())
cout<<endl<<"5 is absent as a key";
return 0;

}

/*similarly there is an ***unordered map*** which can be used 
to search with 0(1) very fast compared to ordered map*/