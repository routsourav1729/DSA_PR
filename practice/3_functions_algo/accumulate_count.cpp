#include<bits/stdc++.h>
using namespace std;
void accumul()
{
array<int,7>ar={6,3,5,2,8,12,4};
for(auto i:ar)
cout<<i<<" ";
cout<<endl;
cout<<accumulate(ar.begin()+1,ar.end()-2,0);
//accumulate(start_itr,end_itr,initial accumulation value)
//keep init acc value as 0 id u want to sum 
//o(n) so same as for loop bt better code readability
}
void arrcount()
{
    cout<<endl;
    array<int,7>ar={6,3,6,2,8,12,6};
    for(auto i:ar)
    cout<<i<<" ";   
    cout<<endl;
    cout<<"6 appears "<<count(ar.begin(),ar.end(),6)<<" times in array"<<endl;
    cout<<"6 appears "<<count(ar.begin()+1,ar.end()-1,6)<<" times between index 1 and 6";
}
int main(){
accumul(); 
arrcount();   
return 0;
}