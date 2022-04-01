
// a virtual function is a function that exist but can not  be accessed

#include <iostream>
#include <string>
using namespace std;

class Customer{
  public:
    virtual void give(){
      cout<<"Bun"<<endl;
    }
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
  Boy b1;
  Girl g1;

  Customer *ptr = NULL;
  ptr = &b1;
  ptr->give();

  ptr = &g1;
  ptr->give();
}