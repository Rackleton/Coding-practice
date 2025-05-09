#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    cout<<"[ ";
    for(int i1=1;i1<=n; i1++){ 
        
       for(int i2=2;i2<i1;i2++){
        if(i1%i2==0){
            break;
        }
        if(i2==i1-1){
            cout<<i1<<" ";
        }
       }
    }
   cout<<"]"<<endl;
  
    return 0;
}
