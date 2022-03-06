

#include <iostream>
using namespace std;

int main (){
  int mark [] = {};
  int subject;
  int n;
  int total ;
  cout<<"Enter the number of your subject: "<<endl;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    /* code */
    cout<<"Enter your mark for subject: "<<i<<endl;
    cin>>subject;
    mark[i] = subject;
    // total += mark[i];
    if (mark[i] > 80 ){
      cout<<"You got an A grade for your "<<i + 1<<"subject"<<endl;
    }else if (mark[i] < 80 && mark[i] > 70 )
    {
      /* code */
      cout<<"You got a B+ grade for your "<<i + 1<<"subject"<<endl;
    }else if(mark[i]< 70 && mark[i] > 60 ){
       cout<<"You got a B grade for your "<<i + 1<<"subject"<<endl;
    }else if(mark[i]< 60 && mark[i] > 50 ){
       cout<<"You got a C grade for your "<<i + 1<<"subject"<<endl;
    }else{
      /* code */
      cout<<"You got a D grade for your "<<i + 1<<"subject"<<endl;
    }
    
  }
  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   cout<<mark[i]<<endl;
  // }
  
  

}