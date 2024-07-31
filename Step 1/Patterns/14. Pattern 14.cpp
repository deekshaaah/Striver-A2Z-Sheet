#include <iostream>
using namespace std;

void func(int n){
    for(int i=1; i<=n; i++){
        for(char ch='A'; ch<'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    func(n);
}
