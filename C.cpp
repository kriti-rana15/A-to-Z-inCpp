#include<iostream>
using namespace std;
int main(){
    int n,m;  //8 ,6
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j<=m-(i+2)){
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
        for(int j=1;j<=m;j++){
            if(j==i+1){
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
            if(j==i){
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
            if(j==i){
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
            if(j==i){
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
            if(j==i+1){
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
            if(j<=m-(i+2)){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
        break;
    }
}