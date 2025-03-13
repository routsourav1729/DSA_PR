#include<bits/stdc++.h>
using namespace std;

int main(){
stack<int>st;
int a;
st.push(1);
st.push(4);
st.push(5);
st.push(9);
st.push(45);
st.push(7);
a=st.size();
for(int i=0;i<a;i++){
    cout<<st.top()<<" ";
    st.pop();
}
return 0;
}