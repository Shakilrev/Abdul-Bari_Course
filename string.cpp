#include<iostream>
using namespace std;
 int main(){
    char S[10] = "HELLO";
    char S1[] = "HELLO";
    char S2[] = {65,66,67,68,0,69,70};

    cout<<S<<endl;
    cout<<S1<<endl;
    cout<<S2<<endl;

    char name[20];
    char name1[20];

    cin.getline(name,20);
    cin.getline(name,20);
    cout<<name<<endl;
    cout<<name1<<endl;
    return 0;
 }