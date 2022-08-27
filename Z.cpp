#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;  //6
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
        break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==n-1){
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
        for(int j=1;j<=n;j++){
            if(j==n-2){
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
        for(int j=1;j<=n;j++){
            if(j==n-3){
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
        for(int j=1;j<=n;j++){
            if(j==n-4){
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
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
        break;
    }
    return 0;
}