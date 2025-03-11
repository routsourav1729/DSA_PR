#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>vec={9,7};

vec.push_back(1);
vec.push_back(2);
vec.emplace_back(5);
for(auto i: vec)
cout<<i<<" ";
cout<<endl;

vector<int>dupvec(vec);
dupvec.erase(dupvec.begin()+2);
for(auto i: dupvec)
cout<<i<<" ";

cout<<endl;

vector<int>dupvec2(vec);
dupvec2.erase(dupvec2.begin()+1,dupvec2.end()-2);
for(auto i: dupvec2)
cout<<i<<" ";
/*
    9   7   1   2   5 _
    ^                 ^
    |                 |
vec.begin()       vec.end()


    9   7   1   2   5 _
        _________         underline will be deleted
        ^           ^ 
        |           |
 vec.begin()+1    vec.end()-1
*/
cout<<endl;
vector<int>a={2,3};
vector<int>b={6,7};
swap(a,b);

for(auto i: a)
cout<<i<<" ";

vec.insert(vec.begin()+3,8);

cout<<endl;
for(auto i:vec)
cout<<i<<" ";

/*
    9   7   1   2   5 
                ^                 
                |                 
          vec.insert(vec.begin()+3,8)       
it will be inserted exactly in that postition 
forcing right side to move 
*/
return 0;
}