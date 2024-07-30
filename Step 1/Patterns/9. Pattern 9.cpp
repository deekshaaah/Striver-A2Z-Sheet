#include <iostream>
using namespace std;

void func1(int n){
    for(int i=1; i<=n; i++){
        // space
        for(int j=1; j<n-i+1; j++){
            cout<<" ";
        }
        
        // star
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        
        // space
        for(int j=1; j<n-i+1; j++){
            cout<<" ";
        }
        
        cout<<endl;
    }
}

void func2(int n){
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
    func1(n);
    func2(n);
}
