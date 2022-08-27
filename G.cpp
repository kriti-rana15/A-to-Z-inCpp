#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;  //5
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
        break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==n-i-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==n-i-3){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+5;j++){
            if(j==n-i-3 | j==n+1| j==n+3 | j==n+5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+5;j++){
            if(j==n+2 | j==n-i-2 | j==n+5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+5;j++){
            if(j==n-2 | j==n | j==n+2 | j==n+5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        break;
    }
    return 0;
}