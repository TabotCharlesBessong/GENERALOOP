#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;

int main(){
  int num1 = 15;//decimal
  int num2 = 017;//octal
  int num3 = 0x0F;//hexadecimal
  int num4 = 0b00001111;//binary
  // the signed modifier helps us use negaative numbers 
  // this is important when you need mainly negative numbers let  say in a game for example where you wnat only negative values for ypu to reduce the life span of your x-ter
  // we have many other modifiers which work only on itegers and they help us get more values than we can get with the normal int  , this being because we need more space and cant access some numbers with simple int 
  signed int negative {-234};
  cout<<negative<<endl;
  cout<<"number1 : " <<num1 << endl;
  cout<<"number2 : " <<num2 << endl;
  cout<<"number3 : " <<num3 << endl;
  cout<<"number4 : " <<num4 << endl;
  cout<<sizeof(int)<< " sizeof int"<<endl;
  cout<<sizeof(long int)<< " sizeof long int"<<endl;
  cout<<sizeof(float)<< " sizeof float"<<endl;
  cout<<sizeof(double)<< " sizeof double"<<endl;
  cout<<sizeof(long double)<< " sizeof long double"<<endl;
  cout<<sizeof(bool)<< " sizeof bool"<<endl;
  cout<<sizeof(string)<< " sizeof string"<<endl;

  bool married = true;
  if (married){
    cout<<"Junior is married"<<endl;
  }else{
    cout<<"Junior is not yet marries"<<endl;
  }

  // for float and long doubles , you can use the f and L at the end of the float and long double respectively 


  // characters and text 
  char value = 67;
  // the value will be printed in charcater representation since it is in char datatypes
  int num = static_cast<int>(value);
  // so to have our char value in int , we will have to typecast in to integer
  cout<<value<<endl<<num<<endl;

  char character {'a'};
  int num6 = static_cast<int>(character);
  cout<<character<<endl<<num6<<endl;

  //  in cpp we have the auto data types which lets you use any data type 
  // so if you pass a double , it takes a double and same goes for the other data types 





  // output formating in cpp 
}