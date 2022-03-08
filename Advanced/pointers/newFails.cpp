
#include <iostream>
using namespace std;

int  main(){

  // int lots {new int[10000000000000000000]};

  // for (size_t i{} ; i<10000000000000000000 ; ++i ){
  // //  The code below will fail because of the size of the array 
  //   // cout<<i<<endl;

  //   // The problem can however be handled with some cpp module
  //   // so we can use the try catch block 
  //   try
  //   {
  //     /* code */
  //     int* lots { new int[100000]};

  //   }
  //   catch(std::exception& e)
  //   {
  //     // but due to the size of the array , it will take longer to excecute
  //     std::cout << "Cought an exception ourselves" << e.what() << '\n';
  //   }
    
  // }

  // an alternative way could still be to use the nothow method

  for (size_t i = 0; i < 100000000000000; i++)
  {
    /* code */
    int* lots {new (nothrow)int [1000000]};
    if(lots == nullptr){
      cout<<"Memory allocation failed"<<endl;
    }
    cout<<"Memory allocation successfull"<<endl;
  }
  
}