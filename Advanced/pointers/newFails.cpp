
#include <iostream>
using namespace std;

int  main(){

  int lots {new int[10000000000000000000]};

  for (size_t i{} ; i<10000000000000000000 ; ++i ){
  //  The code below will fail because of the size of the array 
    // cout<<i<<endl;

    // The problem can however be handled with some cpp module
    // so we can use the try catch block 
    try
    {
      /* code */
      int* lots { new int[100000]};

    }
    catch(std::exception& e)
    {
      std::cout << "Cought an exception ourselves" << e.what() << '\n';
    }
    
  }

  // an alternative way could still be to use the nothow method
}