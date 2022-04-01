
#include <iostream>
#include <string>
using namespace std;

class house{
  //member variable
  int length = 0, breath = 0;

  // member function
  public:

    void setData(int x ,int y){
      length = x ;
      breath = y;
    }
  // public:
    void area (){
      cout <<"Area of our house is: "<<length * breath<<endl;
    }
};

int main(){
  house h1;
  h1.setData(500,400);
  h1.area();
  // cout<<h1.area()<<endl;
}
