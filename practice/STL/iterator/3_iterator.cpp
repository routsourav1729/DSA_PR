#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>vec;
vec.push_back(1);
vec.push_back(2);
vec.emplace_back(5);
for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
}
//what if i dont want to use lenthy loops 
//iterators cn be used for this
// cout<<endl;
// vector<int>::iterator itr =vec.begin();
// vector<int>::iterator end =vec.end(); 
// //vec.end() points to address after last element not the last element 


// for(vector<int>::iterator i=itr;i<end;i++){
//     cout<<*i<<endl;
// }

//alteranatively we can write auto as 
//it automatically assigns type of iterator
cout<<endl;
auto begin =vec.begin();
auto end = vec.end();
//now begin points to first element of the vector
//end points to one element after last element of vector

for(auto i=begin;i<end;i++){
    cout<<*i<<endl;
}


// can it be done in even better way?

for(auto i: vec){
cout<<i<<' ';
}
// above i is not a iterator, it goes through vec
return 0;
}

/*
auto assignment can be used for any variable in c++ not just iterators

*/