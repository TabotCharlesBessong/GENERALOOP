#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

    srand(time(0)); // Seed

    

    int random_num = std::rand() % 10 + 1 ; // [1~10]
    for(size_t i {0} ; i < 20 ; ++i){
        random_num = std::rand() % 10 + 1;
        cout << "random_num " << i << "  :   " <<  random_num << endl; // 0 ~ RAND_MAX       
    }

 
   
    return 0;
}