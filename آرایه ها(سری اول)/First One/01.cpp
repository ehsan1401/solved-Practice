#include <iostream>
using namespace std;

int main() {
  int Array[10];

  for(int i=10 ; i>=0 ;i--){
    cout<<"please enter index "<<i<<":"<<"\t";
    cin>>Array[i];
  }
  cout<<"Output: "<<endl;

  for(int j = 0; j<10 ; j++){
    cout<<Array[j]<<",";
  }
  return 0;
}