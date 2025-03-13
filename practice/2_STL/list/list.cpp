#include<bits/stdc++.h>
using namespace std;

int main(){

list<int>ls;
ls.push_back(1);
ls.push_back(5);
for(auto i:ls)
cout<<i<<" ";

cout<<endl;
ls.push_front(7);
for(auto i:ls)
cout<<i<<" ";
/*
the speciality of list is it has
push_front and emplace_Front
which is not there in vector
*/

return 0;
}