#include<bits/stdc++.h>
using namespace std;


int main(){
//map is like dictionary in python
multimap<int,string>m;
// m[1]="fgf" is invalid here as its a multi map
m.insert({3,"rajesh"});
m.insert({2,"sourav"});
m.insert({1,"nihar"});
m.insert({2,"akash"});
m.insert({1,"ajay"});
m.insert({4,"akki"});

for(auto i:m)
cout<<i.first<<": "<<i.second<<endl;
cout<<endl; 
auto it=m.find(4);
//it is an iterator(pointer) pointing to a location
// which has a key and a value
//(*it) is values in that location 
cout<<(*it).first<<": "<<(*it).second<<endl;

//now i want to print all key value pair with particular key

for(auto i:m)
{
    
if(i.first==2)
cout<<i.first<<": "<<i.second<<endl;
}

return 0;

}
