#include <iostream>
using namespace std;

int main() {
  	int A[12];
    //دریافت هزینه هر ماه
	for(int i = 0 ; i<12 ; i++){
		cout<<"enter cost "<<i+1<<endl;
		cin>>A[i];
	}
    //محاسبه میانگین هزینه ها
	int Avrage=0;
	int counter = 0;
	for(int j = 0 ; j< 12; j++){
		Avrage = A[j] + Avrage;
		counter++;
	}
	Avrage = Avrage / counter;
    //شمار ماه هایی که هزینه آنها از میانگین بیشتر بوده
    int counter_mon = 0;
	for(int j = 0 ; j<12 ; j++){
		if(A[j]>Avrage){
			counter_mon++;
		}
	}
	cout<<endl<<"numbers: "<<counter_mon;

  return 0;
}