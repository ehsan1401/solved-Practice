#include <iostream>
using namespace std;
int main() {
	int A[10] = {10,6,5,8,46,5,65,12,44,85};
	int B[10];
	
	for(int i = 0 ; i< 10 ; i++){
		B[i] = A[i];
	}
	for(int j =0 ; j<10 ; j++){
		cout<<B[j]<<",";
	}
  return 0;
}