#include<bits/stdc++.h>
using namespace std;

void sum(int *a){
cout<<*a+*(a+1)<<endl;
cout<<*(a+2)+*(a+3);
}

int main(){
    int num[4];
    for(int i=0; i<4;i++){
        cin>>num[i];
      
    }
    sum(num);
    

  
    return 0;
}
