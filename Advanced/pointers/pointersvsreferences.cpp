#include <iostream>
using namespace std;

int main(){

	//Declare pointer and reference

    double doubleValue {12.34};
    double& refDoubleValue {doubleValue}; // Reference to doubleValue
    double* pDoubleValue {&doubleValue}; //Pointer to doubleValue
	
	//Reading
	cout << "doubleValue : " << doubleValue << endl;
	cout << "refDoubleValue : " << refDoubleValue << endl;
	cout << "pDouble_addres : " << pDoubleValue << endl;
	cout << "*pDoubleValue : " << *pDoubleValue << endl;
	
	// Writting through pointer
	*pDoubleValue = 15.44;
	
  cout << endl;
	cout << "doubleValue : " << doubleValue << endl;
	cout << "refDoubleValue : " << refDoubleValue << endl;
	cout << "pDoubleValue : " << pDoubleValue << endl;
	cout << "*pDoubleValue : " << *pDoubleValue << endl;
	
	// Writting through reference
	refDoubleValue = 18.44;
	
    cout << endl;
    cout << "doubleValue : " << doubleValue << endl;
    cout << "refDoubleValue : " << refDoubleValue << endl;
    cout << "pDoubleValue : " << pDoubleValue << endl;
    cout << "*pDoubleValue : " << *pDoubleValue << endl;


    double someOtherDouble{78.45};

    //Make the reference reference something else.
    refDoubleValue = someOtherDouble;

    cout << "Making the reference reference something else..." << endl;
    cout << endl;
	  cout << "doubleValue : " << doubleValue << endl;
	  cout << "refDoubleValue : " << refDoubleValue << endl;
	  cout << "pDoubleValue : " << pDoubleValue << endl;
	  cout << "*pDoubleValue : " << *pDoubleValue << endl;



    //Make the pointer point to something else
    pDoubleValue = &someOtherDouble;
    cout << "Making the pointer point somewhere else..." << endl;
    cout << endl;
	  cout << "doubleValue : " << doubleValue << endl;
	  cout << "refDoubleValue : " << refDoubleValue << endl;
    cout << "&doubleValue : " << &doubleValue << endl;
    cout << "&refDoubleValue : " << &refDoubleValue << endl;
	cout << "pDoubleValue : " << pDoubleValue << endl;
	cout << "*pDoubleValue : " << *pDoubleValue << endl;


    *pDoubleValue = 555.5;

    cout << endl;
	cout << "doubleValue : " << doubleValue << endl;
	cout << "refDoubleValue : " << refDoubleValue << endl;
    cout << "&doubleValue : " << &doubleValue << endl;
    cout << "&refDoubleValue : " << &refDoubleValue << endl;
	cout << "pDoubleValue : " << pDoubleValue << endl;
	cout << "*pDoubleValue : " << *pDoubleValue << endl;
   
    return 0;
}