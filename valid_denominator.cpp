#include<iostream>
using namespace std;
int main(){
    int a , b;
    float c;
    cout<<"enter 2 numbers = ";
    cin>>a>>b;
    if(b==0){
        cout<<"division by zero";
    }else{
        c=a/float(b);
        cout<<c;
    }
}