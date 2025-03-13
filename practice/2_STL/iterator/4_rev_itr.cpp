#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>vec;
vec.push_back(1);
vec.push_back(2);
vec.emplace_back(5);


for(auto i: vec){
cout<<i<<' ';
}
// above i is not a iterator, it goes through vec
cout<<endl;
auto revbegin=vec.rbegin();
auto revend=vec.rend();

for (auto i=revbegin;i<revend;i++)
cout<<*i<<endl;
return 0;
}

/*
auto assignment can be used for any variable in c++ not just iterators

begin() points to first element and end() points to next address of last element
rbegin() points to last element and rend() points to previous address of first element

IMP***
reverse iteratorworks on reverse cocept that means if i increment pointer it goes in backward direction
*/