#include<iostream>
using namespace std;
int main(){
    int N=5;
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}