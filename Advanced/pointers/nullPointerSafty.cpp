
#include <iostream>
using namespace std;

int main(){
  // These are measure we take when a pointer has no value 
  int *p{};
  p = new int(8);
  if(!(p == nullptr)){
    //  we can still check the condition above wit simple if(p){ code }
    cout<<"P points to a VALID address: "<<p<<endl;
    cout<<"Valus is :"<<*p<<endl;
  }else{
    cout<<"p is an invalid address"<<endl;
  }
  delete p;
  nullptr;

  // calling a delete on a null pointer without returning its value will not cause any problem 
  // i.e without checking nullity  
}