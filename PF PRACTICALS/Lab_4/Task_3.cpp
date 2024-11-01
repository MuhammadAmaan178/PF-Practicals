/* Question #03
Write a menu driven C++ program that ask the user to choose the
type in which he wants the output?
Either he wants to convert the entered Celsius temperature in
to Fahrenheit or Kelvin? */

#include <iostream>
using namespace std;

int main(){
	float temp;
	cout<<"Enter The Temperature In Celsius : ";
	cin>>temp;
	
	char x;
	cout<<"Enter In Which You Want To Convert (F for Farenheit and K for Kelvin) : ";
	cin>>x;
	
	float temp_f = ((9*temp)/5)+32;
	float temp_k = temp + 273.15;

	if (x == 'F'){
		cout<<temp<<" In Farenhite Is "<<temp_f<<endl;
	}
	else if (x == 'K'){
		cout<<temp<<" In Kelvin Is "<<temp_k<<endl;
	}
	else{
		cout<<"Input Error";
	}
	return 0;
}
