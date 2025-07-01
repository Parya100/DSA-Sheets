#include<iostream>
using namespace std;
int main(){
  int n, odd=0,even=0;
  cin>>n;
for(int i=2;i<=n;i++){
   int id=n%10;
  if(id%2==0){
    even+=i;
  }
  else{
    odd+=i;
  }
}
// for(int j=1;j<=n;j++){
//   if
// }
cout<<even<<endl;
cout<<odd<<endl;
  return 0;

}
