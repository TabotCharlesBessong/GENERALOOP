
#include <iostream>
using namespace std;

void ageFxn (int* age);

int main(){
  int age{34};
  cout<<"Age (before call) : "<< age << " &age" << &age<<endl;
  // The argument  you pass in must be pointing to the address 
  ageFxn(&age);
  cout<<"Age (after call) : "<< age << " &age : "<< &age<< endl;
  return 0 ;
}

void ageFxn (int* age){  // so is the parameter , it must be a pointer 
  // here , we are passing the function by pointers so it increments the copy 
  ++(*age);
  cout<<"You are "<< *age << "Years old : "<<" &Age" << &age << endl;

}