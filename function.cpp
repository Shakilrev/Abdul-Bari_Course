#include<iostream>
using namespace std;
int add(int a , int b){
    int sum = a + b;
    return sum;
}

int main(){
    int x,y,z;
    x=10;
    y=5;
    z=add(10,5);
    cout<<z;
}