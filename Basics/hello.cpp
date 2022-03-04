#include <iostream>
#include <string>
using namespace std;

// std::cerr prings erros 
  // cerr<<"An error just occured"<<endl;

// std::clog  prong message to the console 

int getValue(){
  return 3;
}

int addNum(int firstNum, int secondNum){
  // int res =  firstNum + secondNum;
  // The valuees below will be passed as default parameters 
  cout<< "Enter your first Number: "<<endl;
  cin>>firstNum;
  cout<< "Enter your Second Number: "<<endl;
  cin>>secondNum;
  int res =  firstNum + secondNum;
  return res;
}
string name(){
  string lastName {"Tabot "};
  string firstName {"Charles Bessong "};
  string fullName = firstName + lastName;
  cout<<fullName<<endl;
}

int main(){
  cout <<"Hello world"<<endl;
  auto result = (10 <= 20) > 0 ;
  cout << result<<endl ;
  cout<<getValue()<<endl;
  // The rsult of this addNum function will first depend on the value of that it collect from the fxn it  self as thwy will be considerd as default parameters 
  
  int sum = addNum(34,26);
  cout <<sum<<endl;
  // note we dont always need to pass paramters into our functions 
  name();

  // Now we can sometimes encouter some problems when taking valus from users which has plenty of space 
  string fName;
  cout<<"Enter your full Name: "<<endl;
  //  So in order to avoid the  above  problem , we use getline  function 
  cin>>fName;
  // cout<<fName<<endl;
  getline(cin,fName);

  
}