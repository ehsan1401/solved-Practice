#include <iostream>
using namespace std;
int main() {
	for(int j = 0 ; j<10 ; j++){
		for(int i = 10 ; i> j  ; i--){
			cout<<"*";
		}
		cout<<endl;
	}
  return 0;
}
