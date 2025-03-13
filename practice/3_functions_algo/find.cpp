#include<bits/stdc++.h>
using namespace std;

void expfind()
{
    cout<<endl;
    int ar[7]={6,3,6,2,8,12,6};
    for(auto i:ar)
    cout<<i<<" ";   
    cout<<endl;
    auto it= find(ar,ar+5,8);
    if(it==ar+5)
    cout<<"not found";
    else
    cout<<*it;
}
int main(){
expfind();   
return 0;
}