#include<bits/stdc++.h>
using namespace std;

int main(){
stack<int>st;
stack<int>st2;
int b[5] = {2,4,5,3,4};

for(int i=0;i<5;i++){
st2.push(b[i]);
}
st.push(1);
st.push(4);
st.push(5);
st.push(9);
st.push(45);
st.push(7);
// cout<<st.top()<<endl;
// st.pop();
// cout<<st.top()<<endl;
// st.pop();
// cout<<st.top()<<endl; //runtime error

while(st.empty()== false){
    cout<<st.top()<<" ";
    st.pop();
}

cout<<endl;
st.swap(st2);
while(st.empty()== false){
    cout<<st.top()<<" ";
    st.pop();
}
return 0;
}