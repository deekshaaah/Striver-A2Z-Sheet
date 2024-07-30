#include <iostream>
using namespace std;

void func(int n){
    for(int i=1; i<=n; i++){
        // space
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        
        // star
        for(int j=1; j<=2*n-(2*i-1); j++){
            cout<<"*";
        }
        
        // space
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    func(n);
}
