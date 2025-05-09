#include <iostream>
using namespace std;
/*
the goal of this code is to read a number and write the prime factors of it.
this exercise was taken from my own head while trying to practice the creation of functions;
*/

bool prime(int X){
if(X<2)return false;
for(int i=2;i*i<=X;i++){
    if(X%i==0)return false;
}
return true;
}
int main(){

    int N,v;
    cin>>N;
    v=N;
    cout<<"[ ";
    for(int i1=2;i1<=N;i1++){
        if(prime(i1) && v%i1==0){
            while(v%i1==0){
            cout<<i1<<" ";
            v=v/i1;
            }
        }
    }
    cout<<"]"<<endl;
   return 0;
}
