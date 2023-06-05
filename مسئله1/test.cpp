#include <iostream>
using namespace std;

int main() {
  int age;

    cout<<endl<<"enter your age:";
    cin>>age;
    if (age<10)
    {
        cout<<"child";
    }
    else if (age<18 && age>10)
    {
        cout<<"teenager";
    }
    else if (age<35 && age>18)
    {
        cout<<"Young";
    }
    else if (age<60 && age>35)
    {
        cout<<"Middle-aged";
    }
    else
    {
        cout<<"Old";
    }

  return 0;
}