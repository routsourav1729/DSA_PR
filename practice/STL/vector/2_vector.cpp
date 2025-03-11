#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>vec;
int a=3;
vec.emplace_back(1);
vec.emplace_back(2);
vec.emplace_back(0);
vec.push_back(a);
for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
}
cout<<endl;
cout<<vec.size();

return 0;
}
 

/*
defined as:vector<any variable(even a pair)> var name

push_back() invokes copy constructor so not efficient
,when i already have an int object stored in another variable for some purpose
i use pushback to put it inside a vector

emplace_back() will be used inplace to construct a vector
so more efficient
*/
