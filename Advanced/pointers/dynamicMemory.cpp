#include <iostream>

using namespace std;

int main(){
  // dynamic memory allocation 
  int *p  {nullptr};
  p = new int;

  *p = 87;
  cout<<"\n"<<"The dynamically allocated memory : "<<"\n"<<*p<<endl;
  // dynamic memory allocation are very important in game developemnt  as we can use the to create a x-ter and destroy them once their life is over 
  delete p;
  p = nullptr;
  // after deleting memory , reset it to nullptr
  // *p = 45;
  // cout<<*p<<endl;
  // cout<<"Hello world"<<endl;
  // The  deleted pointers are still available and can still be reused 
}