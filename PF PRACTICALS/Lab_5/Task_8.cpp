/* Question #08
Write a menu driven C++ program that ask the user to choose the type in which he wants the output?
Either he wants to convert the entered Celsius temperature in to Fahrenheit or Kelvin?[using
switch statement]*/

#include<iostream>
using namespace std;

int main(){
	double temp;
	cout<<"Enter The Temperature In Celsius : ";
	cin>>temp;
	
	char x;
	cout<<"Enter In Which You Want To Convert (F for Farenheit and K for Kelvin) : ";
	cin>>x;
	
	float temp_f = ((9*temp)/5)+32;
	float temp_k = temp + 273.15;

	switch(x){
		case 'F':
			cout<<"The "<<temp<<" In Farenheit Is "<<temp_f<<endl;
			break;
		case 'K':
			cout<<"The "<<temp<<" In Kelvin Is "<<temp_k<<endl;
			break;
		default:
			cout<<"Invalid Choice(Choice should be F or K)";
	}
	return 0;
}

