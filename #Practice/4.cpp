#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j=1;
    for (int i = 1; i <= 10; i++)
    {
        if (n/2==0)
        {
            cout<<n;
            j++;
        }
        else{
            cout<<n<<endl;
        }
        
    }
    cout<<j;
    return 0;
}