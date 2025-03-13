#include<bits/stdc++.h>
using namespace std;

bool intcomparator(pair<int,int>el1,pair<int,int>el2)
{//very importnt read carefully
if (el1.second>el2.second) return true;
if (el1.second<el2.second) return false;
if (el1.first<el2.first) return true;
else return false;
}
void explaincomparator()
{
   pair<int,int>arr[]={{3,6},{2,5},{1,6},{4,9},{5,9}};
   //sort it according to second element in descending order
   //if second elemnt is same use first element in ascending 
    sort(arr,arr+5,intcomparator);
    for(auto i:arr)
    cout<<"("<<i.first<<","<<i.second<<") ";
}
int main(){
explaincomparator();   
return 0;
}