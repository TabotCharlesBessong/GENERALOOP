
#include <iostream>
using namespace std;

void ageFxn (int& age);

int main(){
  int age {74};
  cout << "You are "<< age << " Before the call "<< " &age"<<&age <<endl;
  ageFxn(age);
  cout << "You are "<< age << " After the call "<< " &age"<<&age <<endl;
}

void ageFxn (int& age){
  ++age;
  cout<<"You are "<< age << "Years old "<< "& age"<< &age <<endl;  
}