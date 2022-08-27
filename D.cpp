#include<iostream>
using namespace std;
int main(){
    int n,m;    //7 ,6
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j<m-1){
                cout<<"* ";
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
            if(j==1 | j==m-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==1 | j==m){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==1 | j==m){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==1 | j==m){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==1 | j==m){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==1 | j==m-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j<m-1){
                cout<<"* ";
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