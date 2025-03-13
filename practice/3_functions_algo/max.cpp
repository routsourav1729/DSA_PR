#include<bits/stdc++.h>
using namespace std;

void maxelement()
{
    cout<<endl;
    int ar[7]={6,3,6,2,8,12,6};
  
    auto it= max_element(ar,ar+7);
    cout<<*it;
}
int main(){
maxelement();   
return 0;
}