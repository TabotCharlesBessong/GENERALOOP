
// a virtual function is a function that exist but can not  be accessed

#include <iostream>
#include <string>
using namespace std;

class Customer{ // by making the function of a class pure virtual function , the class  becomes an abstract class 
  public:
    virtual void give() = 0;
};

class Boy : public Customer{
  public:
    void give(){
      cout<<"Boy Bun"<<endl;
    }
};

class Girl : public Customer{
  public:
    void give(){
      cout<<"Girl Bun"<<endl;
    }
};


int main(){
  // This is polymorphism , the ability of a class to exist in more than one form 
  Boy b1;
  Girl g1;

  Customer *ptr = NULL;
  ptr = &b1;
  ptr->give();

  ptr = &g1;
  ptr->give();
}