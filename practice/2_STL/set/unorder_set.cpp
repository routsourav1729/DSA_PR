#include<bits/stdc++.h>
using namespace std;
void unordset(int a){

    unordered_set<int>ms;
    ms.insert(10);
    ms.insert(1);
    ms.insert(2);
    ms.insert(5);
    ms.insert(4);
    ms.insert(1);
    ms.insert(5);
    ms.insert(8);
    ms.insert(4);
for(auto i:ms)
cout<<i<<" ";
cout<<endl;

cout<<*(ms.find(a));
}

int main(){
unordset(4);
return 0;

}