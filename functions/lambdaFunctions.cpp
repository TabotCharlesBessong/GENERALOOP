
#include <iostream>
using namespace std;

// we give lambda functions a possibility of calling it by assigning it to a varible 
 auto result = [](double a , double b)->double{
  // return (a + b);

  cout<<"a + b "<< (a + b) << endl;
};

// result();


int main(){
  result(59.75 , 12.25);
}