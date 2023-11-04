#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r={10,5};
    struct Rectangle *p = &r;
    cout<<r.length<<" "<<r.breadth<<endl;;

    p->length=20;
    p->breadth=10;
    cout<<r.length<<" "<<r.breadth;
    

}