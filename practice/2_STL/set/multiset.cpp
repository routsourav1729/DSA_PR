#include<bits/stdc++.h>
using namespace std;

void deletelement(multiset<int> s,int a)
{
//correct way:
s.erase(s.find(a));
for(auto i:s)
cout<<i<<" ";   
//wrong way
cout<<endl;
s.erase(a);
for(auto i:s)
cout<<i<<" ";   
}
void mulset(int a){

    multiset<int>ms;
    ms.insert(1);
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
deletelement(ms,a);
}

int main(){
mulset(1);
return 0;

}