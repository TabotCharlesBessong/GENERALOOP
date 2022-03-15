
#include <iostream>
using namespace std;

// This the concept of passing different params to a function when declared and when called 
// it could also be based on the type of variable 
// Its also based on the name of the function
// it is also based on the order and  number of paramters in fxn 

//  we use it to use many fnx with the same name 

// overloading with different parameters
// we declare functions with the same name and just pass in the parameters of different 
int max (int a , int b){
  return (a>b) ? a : b ;
}

double max (double a , double b){
  return (a>b) ? a : b ;
}

// int max(int a, int b){
//     std::cout << "int overload called" << std::endl;
//     return (a>b)? a : b; 
// }

// The different parameters can be completely of different types or of mixed types

// double max(double a, double b){
//     std::cout << "double overload called" << std::endl;
//     return (a>b)? a : b; 
// }

double max(int a, double b){
    std::cout << "(int,double) overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(double a, int b){
    std::cout << "(double,int) overload called" << std::endl;
    return (a>b)? a : b; 
}

// we can still make the functions different by adding different number of parameters , that is one will have more than the other 

double max(double a, int b,int c){
    std::cout << "(double,int,int) overload called" << std::endl;
    return a;
}

// overloading with pointers 
double min(double* numbers, size_t count){
    std::cout << "doubles overload called" << std::endl;
    double minimum{0};
    
    for(size_t i{0}; i < count ;++i){
        if(numbers[i] < minimum)
            minimum = numbers[i];
    }
    return minimum;   
}

int min(int * numbers, size_t count){
    std::cout << "ints overload called" << std::endl;

    int maximum{0};
    
    for(size_t i{0}; i < count ;++i){
        if(numbers[i] < maximum)
            maximum = numbers[i];
    }
    return maximum;   
}

// overload with addressing

void say_my_name( const std::string& name){
    std::cout << "Your name is (ref) : " << name << std::endl;
}

void say_my_name( std::string name){
    std::cout << "Your name is (non ref) : " << name << std::endl;
}

//Implicit conversions with references

double max(double a, double b){
    std::cout<< "double max called" << std::endl;
    return (a>b)?a:b;
}


//int& max(int& a, int& b){
const int& max(const int& a,const int& b){
    std::cout << "int max called" << std::endl;
    return (a>b)?a:b;
}

// overloading with constant pointer

int max1(int*a , int* b){
    std::cout << "max with int* called" << std::endl;
    return (*a > *b)? *a : *b;
}

int max1(const int* a, const int* b){
    std::cout << "max with cont int* called" << std::endl;
    return (*a > *b)? *a : *b;
}

// overloading with constant addresses 

int max2(int& a, int&b){
    std::cout << "max with int& called" << std::endl;

    //Can change a and b through the reference 
    //a = 200;// This change will be visible outside the function
    
    return (a > b)? a : b;
}

int max2(const int& a, const int& b){
    std::cout << "max with const int& called" << std::endl;
    
    //Can NOT change a and b through the reference 
    //a = 200; // Will give a compiler error.
    return (a > b)? a : b;
}


int main (){

}