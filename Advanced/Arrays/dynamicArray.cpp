
#include <iostream>
using namespace std;

int main(){
  size_t size{10};

  double *salaries {new double[size]};

  int *students {new (nothrow) int [size]{} };

  double *scores {new (nothrow ) double[size]{1,2,3,4,5} };

  if(scores){
    cout<<"The scors array has the size of a pointer: "<<sizeof(scores) << endl;
    cout<<"Successfully allocated memory"<<endl;

    for (size_t i = 0; i < size; i++)
    {
      /* code */
      // so as you can see we can still print the values using the pointer arithmetic or the pointer notation 
      cout<<"Value :"<< scores[i] << " : "<< *(scores + i ) << endl;
    }
    
  }
  // when a pointer points to an array , it can never be the arayys as it holds only its address 

  delete [] salaries;
  salaries = nullptr; 
  delete [] students ;
  students = nullptr;
  delete [] scores;
  scores = nullptr;

  return 0;

  // static arrays have a fixed sizee ,
  // dynamic arrays have a changing size 
}