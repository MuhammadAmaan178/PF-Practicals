/*Question # 7: Write a program to take temperature in Celsius and 
convert it into Fahrenheit by using F=9/5 *C +32;. */

#include<iostream>
using namespace std;
int main(){
	int c,f;
	
	cout<<"Enter Temperature In Celcius : ";
	cin>>c;
	
	f = ((c*9)/5)+32;
	
	cout<<"Temperature in Farenheit is "<<f<<"F"<<endl;
	
	
	
	return 0;
}
