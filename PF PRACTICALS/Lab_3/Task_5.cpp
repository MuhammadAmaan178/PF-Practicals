/*Question # 5: Write a program to take dividend and divisor. Then 
display the quotient and remainder.(e.g. 20 3. Quotient=6, 
Remainder=2)*/

#include<iostream>
using namespace std;

int main(){
	float dividend,divisor,quotient;
	int remainder;
	
	cout<<"Enter Dividend : ";
	cin>>dividend;
	cout<<"Enter Divisor : ";
	cin>>divisor;
	
	quotient = dividend/divisor;
	remainder = (int)dividend%(int)divisor;
	
	cout<<"Dividend : "<<dividend<<endl;
	cout<<"Divisor : "<<divisor<<endl;
	cout<<"Quotient : "<<quotient<<endl;
	cout<<"Remainder : "<<remainder<<endl;
		
	return 0;
}
