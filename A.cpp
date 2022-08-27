#include<iostream>
using namespace std;    //n=11
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==n-(i+4)){
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
            if(j==n-(i+3)|j==n-(i+5)){
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
            if(j==n-(i+6) | j==n-(i+2)){
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
            if(j==n-(i+7) | j==n-(i+5) | j==n-(i+3) | j==n-(i+1)) {
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
            if(j==n-(i+8) | j==n-(i)){
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
            if(j==n-(i+9) | j==n-(i-1)){
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