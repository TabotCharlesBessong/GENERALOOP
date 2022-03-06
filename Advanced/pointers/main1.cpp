
#include <iostream>

using namespace std;

int main(){
  // pointers as the name indicate , ooints the address of the variable 
  // make sure that the type of the pointer is the same as that of the variable 
  // pointers have the same  size but they can however be assigned memory using malloc , calloc and relloc
  int var {46};
  // we now make our pounter var holds the address of our variable 
  int *p {&var} ;
  // this will print the address 
  cout<<"Address of var is "<<p<<endl;
  // This will print the value in that address
  cout<<"Value in the address var is "<<*p<<endl;
  // The nullptr initialises our value with 0
  int *null {nullptr};
  cout<<null<<endl;
  cout<<*null<<endl;

  // Dereferencing is reading the value from a pointer 

  // we can also declare a pointer to a character
  const char *mess = {"hello world!"};
  cout<<"My message : "<<*mess<<endl;
  
}