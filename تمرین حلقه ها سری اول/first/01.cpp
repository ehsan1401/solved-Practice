#include <iostream>
using namespace std;

int main() {
	int N; 
	cout<<"Enter Number: "<<endl;
	cin>>N;
	int f =1 , g =1 ,c;
    if(N==0){
        cout<<0;
    }else if(N==1){
        cout<<1;
    }else{
    cout<<f ; cout<<","<< g<<",";
	for(int i =1 ; i ; i++){
		c = f + g ;
		if(c<=N){
            cout<<c <<",";
            g = f;
		    f = c; 	
        }else{
            break;
        }

	}
    }
  return 0;
}
