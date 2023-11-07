#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char name[20];
    cout<<"enter name = ";
    cin.getline(name,20);
    cout<<strlen(name)<<endl;

    char s1[20]="good ";
    char s2[20]="morning";
    cout<<strcat(s1,s2)<<endl;

    char s3[20]="programming";
    char s4[20]="m";

    if(strstr(s3,s4)!= NULL)
    {
        cout<<strstr(s3,s4)<<endl;
    }else{
        cout<<"not found"<<endl;
    }



    return 0;
}