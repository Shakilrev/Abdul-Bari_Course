#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    
};

int main(){
    struct Rectangle *p;
    p = new struct Rectangle;

    p->length=20;
    p->breadth=10;
    

}