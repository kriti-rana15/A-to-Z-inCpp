#include<iostream>
using namespace std;
int main(){
    int n,m;    //n=8,m=5
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==m){
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
            if(j==1 || j==n){
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
            if(j==1 || j==n){
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
        for(int j=1;j<=m;j++){
            if(j==m){
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
            if(j==1 || j==n){
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
            if(j==1 || j==n){
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
        for(int j=1;j<=m;j++){
            if(j==m){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
        break;
    }
    return 0;
}