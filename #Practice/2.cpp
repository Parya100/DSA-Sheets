#include<iostream>
using namespace std;
int main(){
    int a=5,b=7,c=3;
    if (a>b)
    {
        if (a>c)
        {
           cout<<a<<" "<<"is greater";
        }
        else{
            cout<<c<<" "<<"is greater";

        }
        
    }
    else if (b>a){
        if (b>c)
        {
            cout<<b<<" "<<"is greater";
        }
        else{
            cout<<c<<" "<<"is greater";
        }
        

    }
    else{
        cout<<c<<" "<<"is greater";
    }
    
    
    return 0;
}