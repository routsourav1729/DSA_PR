#include<bits/stdc++.h>
using namespace std;
void permute()
{
array<int,5>ar={6,3,5,2,8};
sort(ar.begin(),ar.end()); // without this it starts at 63528 and so on in order
do{
for(auto i:ar)
cout<<i;
cout<<endl;
}while(next_permutation(ar.begin(),ar.end()));
}
void prepermute()
{
string st="sourav";
do 
{
    cout<<st<<endl;
}
while(prev_permutation(st.begin(),st.end())) ; 
}
void partialperm()
{
    string st="sourav";
    //suppose i want all words using letters of string
    //with first and last letter preserved
    sort(st.begin()+1,st.end()-1);
  
    do 
    {
        cout<<st<<endl;
    }
    while(next_permutation(st.begin()+1,st.end()-1)) ;   
}
int main(){
// permute();   
// prepermute();
partialperm();
return 0;
}