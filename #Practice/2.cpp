#include<iostream>
using namespace std;
int main(){
    int a=5,b=7,c=3;
    if (a>b)
    {
        if (a>c)
        {
           cout<<a;
        }
        else{
            cout<<c;

        }
        
    }
    else if (b>a){
        if (b>c)
        {
            cout<<b;
        }
        else{
            cout<<c;
        }
        

    }
    else{
        cout<<c;
    }
    
    
    return 0;
}