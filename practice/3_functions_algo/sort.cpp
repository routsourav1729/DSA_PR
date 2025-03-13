#include<bits/stdc++.h>
using namespace std;
void sorting()
{
array<int,5>ar={6,3,5,2,8};
for(auto i:ar)
cout<<i<<" ";
// sort(ar); wont work as sort wants an iterator at begining and end
sort(ar.begin(),ar.end());
cout<<endl;
for(auto i:ar)
cout<<i<<" ";
cout<<endl;
}
void partialsort()
{cout<<endl;
int ar[6]={4,6,2,8,3,5};
for(int i=0;i<6;i++)
cout<<ar[i]<<" ";
cout<<endl;
sort(ar+1,ar+4);
for(int i=0;i<6;i++)
cout<<ar[i]<<" ";
}
int main(){
sorting(); 
partialsort();   
return 0;
}

//sort(start_iterator,end_iterator)
//works with vector as well