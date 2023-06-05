#include <iostream>
using namespace std;

int main() {
    int employs;
    float maximum =0;
    float Pre_salary;
    float Next_salary;
    float Result;

    cout << "Enter Number of Employes: ";
    cin>>employs;

    for(int i = 0 ; i<employs ; i++){
        cout<<"Enter previous Salary: ";
        cin>>Pre_salary;
        cout<<"Enter Next Salary: ";
        cin>>Next_salary;

        Result = Next_salary -Pre_salary ;
        
        if(Result>maximum){
            maximum = Result;
        }
    }

    cout<<"Most Increase: "<<maximum;
  return 0;
}