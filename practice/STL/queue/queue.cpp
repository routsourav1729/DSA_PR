#include<bits/stdc++.h>
using namespace std;

int main(){
queue<int>q;
queue<int>q2;
int b[5] = {2,4,5,3,4};

for(int i=0;i<5;i++){
q2.push(b[i]);
}
q.push(1);
q.push(4);
q.push(5);
q.push(9);
q.push(7);
// cout<<st.top()<<endl;
// st.pop();
// cout<<st.top()<<endl;
// st.pop();
// cout<<st.top()<<endl; //runtime error

while(q.empty()== false){
    cout<<q.front()<<" ";
    q.pop();
}

cout<<endl;
q.swap(q2);
while(q.empty()== false){
    cout<<q.front()<<" ";
    q.pop();
}
return 0;
}