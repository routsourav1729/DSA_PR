#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>vec={9,7};

vec.push_back(1);
vec.push_back(2);
vec.emplace_back(5);
for(auto i: vec)
cout<<i<<endl;
cout<<endl;

vector<int>dupvec(vec);
vector<int>dupvec2(vec.begin()+2, vec.end()-1);

for(auto i: dupvec)
{cout<<i<<endl;}
cout<<endl;


for(auto i: dupvec2)
{cout<<i<<" ";}

cout<<vec.front()<<endl<<vec.back();
vec.pop_back();
cout<<endl<<vec.back();
return 0;
}