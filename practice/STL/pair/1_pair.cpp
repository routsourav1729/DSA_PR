#include<bits/stdc++.h>
using namespace std;

int main(){
pair<int,int> p={2,8};
cout<<p.first<<p.second;

pair<pair<int,string>,int> q={{2,"hello"},10}; //nested pair

cout<<endl<<q.first.second<<endl<<q.first.first<<endl<<q.second;




return 0;
}


/*
1. included in #include<utility>
2. used to pair wo different type of variable together
3. part of std library
*/

