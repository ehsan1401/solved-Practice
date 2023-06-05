#include <iostream>
using namespace std;
int main() {
	int temp =1;
	for(int i = 1 ; i<=10 ; i++){
		for(int j = 1 ; j< i ; j++){
			cout<<temp; 
			if(temp<9){
			temp++;
			}else{
				temp= 1;
			}
		}
		cout<<endl;
	}
  return 0;
}
