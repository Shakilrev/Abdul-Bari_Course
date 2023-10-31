#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,4,5};
    for(int i=0 ; i<5 ; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    int B[]={10,20,30,40,50};
    for(int i=0 ; i<5 ; i++){
        cout<<B[i]<<" ";
    }
    cout<<endl;

    int C[5]={1,2};
    for(int i=0 ; i<5 ; i++){
        cout<<C[i]<<" ";
    }
    cout<<endl;

    char D[5]={'A','B','C','D','E'};
    
    for(char x:D){
        cout<<x<<" ";
    }

    cout<<endl;
     char E[5]={'A','B','C','D','E'};
    
    for(auto x:E){
        cout<<x<<" ";
    }
}