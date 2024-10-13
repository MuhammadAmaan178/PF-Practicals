/*Question#03
Develop a C++ program that declare almost 6 types of identifiers and display their sizes
in bytes on the screen.*/


#include <iostream>
using namespace std;

int main(){
	//Declaring all 6 data types:-
	int Integer = 123;
	float Float = 10.99;
	char Character = 'A';
	bool Boolean = "True";
	double Double = 99872.129;
	long Long_Integer = 1386242147514139;
	
	//we use "sizeof" operator to prints all data types sizes
	cout<<"Size of Integer is : "<<sizeof(Integer)<<" bytes"<<endl;
	cout<<"Size of Float is : "<<sizeof(Float)<<" bytes"<<endl;
	cout<<"Size of Character is : "<<sizeof(Character)<<" bytes"<<endl;
	cout<<"Size of Boolean is : "<<sizeof(Boolean)<<" bytes"<<endl;
	cout<<"Size of Double is : "<<sizeof(Double)<<" bytes"<<endl;
	cout<<"Size of Long Integer is : "<<sizeof(Long_Integer)<<" bytes"<<endl;
	
	return 0;
}
